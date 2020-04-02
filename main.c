/******************************************************************************
* File Name: main.c
*
* Description: This is the source code for the CE228954 - PSoC 6 MCU QSPI Flash
*              Read and Write Using SFDP example for ModusToolbox.
*
* Related Document: See README.md
*
*******************************************************************************
* (c) 2019-2020, Cypress Semiconductor Corporation. All rights reserved.
*******************************************************************************
* This software, including source code, documentation and related materials
* ("Software"), is owned by Cypress Semiconductor Corporation or one of its
* subsidiaries ("Cypress") and is protected by and subject to worldwide patent
* protection (United States and foreign), United States copyright laws and
* international treaty provisions. Therefore, you may use this Software only
* as provided in the license agreement accompanying the software package from
* which you obtained this Software ("EULA").
*
* If no EULA applies, Cypress hereby grants you a personal, non-exclusive,
* non-transferable license to copy, modify, and compile the Software source
* code solely for use in connection with Cypress's integrated circuit products.
* Any reproduction, modification, translation, compilation, or representation
* of this Software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. Cypress
* reserves the right to make changes to the Software without notice. Cypress
* does not assume any liability arising out of the application or use of the
* Software or any product or circuit described in the Software. Cypress does
* not authorize its products for use in any products where a malfunction or
* failure of the Cypress product may reasonably be expected to result in
* significant property damage, injury or death ("High Risk Product"). By
* including Cypress's product in a High Risk Product, the manufacturer of such
* system or application assumes all risk of such use and in doing so agrees to
* indemnify Cypress against all liability.
*******************************************************************************/

#include "mem_config_sfdp.h"
#include "cyhal.h"
#include "cybsp.h"
#include "cy_retarget_io.h"
#include "cy_serial_flash_qspi.h"

/*******************************************************************************
* Macros
********************************************************************************/
#define PACKET_SIZE             (64u)     /* Memory Read/Write size */

/* Used when an array of data is printed on the console */
#define NUM_BYTES_PER_LINE      (16u)
#define LED_TOGGLE_DELAY_MSEC   (1000u)   /* LED blink delay */
#define MEM_SLOT_NUM            (0u)      /* Slot number of the memory to use */
#define QSPI_BUS_FREQUENCY_HZ   (50000000lu)
#define FLASH_DATA_AFTER_ERASE  (0xFFu)   /* Flash data after erase */


/*******************************************************************************
* Function Name: check_status
****************************************************************************//**
* Summary:
*  Prints the message, indicates the non-zero status (error condition) by turning the LED on, and
*  asserts the non-zero status.
*
* Parameters: 
*  message - message to print if status is non-zero.
*  status - status for evaluation.
*
*******************************************************************************/
void check_status(char *message, uint32_t status)
{
    if (0u != status)
    {
        printf("\r\n================================================================================\r\n");
        printf("\nFAIL: %s\r\n", message);
        printf("Error Code: 0x%08X\r\n", (unsigned int)status);
        printf("\r\n================================================================================\r\n");
        
        /* On failure, turn the LED ON */
        cyhal_gpio_write(CYBSP_USER_LED, CYBSP_LED_STATE_ON);
        while(true); /* Wait forever here when error occurs. */
    }
}


/*******************************************************************************
* Function Name: print_array
****************************************************************************//**
* Summary:
*  Prints the content of the buffer to the UART console.
*
* Parameters:
*  message - message to print before array output
*  buf - buffer to print on the console.
*  size - size of the buffer.
*
*******************************************************************************/
void print_array(char *message, uint8_t *buf, uint32_t size)
{
    printf("\r\n%s (%u bytes):\r\n", message, (unsigned int)size);
    printf("-------------------------\r\n");

    for (uint32_t index = 0; index < size; index++)
    {
        printf("0x%02X ", buf[index]);

        if (0u == ((index + 1) % NUM_BYTES_PER_LINE))
        {
            printf("\r\n");
        }
    }
}


/*******************************************************************************
* Function Name: main
********************************************************************************
* Summary:
*  This is the main function for CM4 CPU. It does...
*     1. Initializes UART for console output and SMIF for interfacing a QSPI
*       flash.
*     2. Performs erase followed by write and verifies the written data by
*       reading it back.
*
* Parameters:
*  void
*
* Return:
*  int
*
*******************************************************************************/
int main(void)
{
    cy_rslt_t result;
    uint8_t tx_buf[PACKET_SIZE];
    uint8_t rx_buf[PACKET_SIZE];
    uint32_t ext_mem_address = 0x00;    
    size_t sectorSize;

    /* Initialize the device and board peripherals */
    result = cybsp_init();
    CY_ASSERT(result == CY_RSLT_SUCCESS);
    
    /* Enable global interrupts */
    __enable_irq();
    
    /* Initialize retarget-io to use the debug UART port */
    cy_retarget_io_init(CYBSP_DEBUG_UART_TX, CYBSP_DEBUG_UART_RX, CY_RETARGET_IO_BAUDRATE);

    /* \x1b[2J\x1b[;H - ANSI ESC sequence for clear screen */
    printf("\x1b[2J\x1b[;H");
    printf("********* CE228954 - PSoC 6 MCU QSPI Flash Read and Write Using SFDP **********\r\n\n");
    
    /* Initialize the User LED */
    result = cyhal_gpio_init(CYBSP_USER_LED, CYHAL_GPIO_DIR_OUTPUT,
              CYHAL_GPIO_DRIVE_STRONG, CYBSP_LED_STATE_OFF);
    check_status("User LED initialization failed", result);
        
    result = cy_serial_flash_qspi_init(smifMemConfigsSfdp[MEM_SLOT_NUM], CYBSP_QSPI_D0,
              CYBSP_QSPI_D1, CYBSP_QSPI_D2, CYBSP_QSPI_D3, NC, NC, NC, NC,
              CYBSP_QSPI_SCK, CYBSP_QSPI_SS, QSPI_BUS_FREQUENCY_HZ);
    check_status("Serial Flash initialization failed", result);
   
    sectorSize = cy_serial_flash_qspi_get_erase_size(ext_mem_address);
    printf("\r\nTotal Flash Size: %u bytes\r\n", cy_serial_flash_qspi_get_size());

    /* Erase before write */
    printf("\r\n1. Erasing %u bytes of memory\r\n", sectorSize);
    result = cy_serial_flash_qspi_erase(ext_mem_address, sectorSize);
    check_status("Erasing memory failed", result);

    /* Read after Erase to confirm that all data is 0xFF */
    printf("\r\n2. Reading after Erase and verifying that each byte is 0xFF\r\n");
    result = cy_serial_flash_qspi_read(ext_mem_address, PACKET_SIZE, rx_buf);
    check_status("Reading memory failed", result);    
    print_array("Received Data", rx_buf, PACKET_SIZE);
    memset(tx_buf, FLASH_DATA_AFTER_ERASE, PACKET_SIZE);
    check_status("Flash contains data other than 0xFF after erase",
            memcmp(tx_buf, rx_buf, PACKET_SIZE));
    
    /* Prepare the TX buffer */
    for (uint32_t index = 0; index < PACKET_SIZE; index++)
    {
        tx_buf[index] = (uint8_t)index;
    }

    /* Write the content of the TX buffer to the memory */
    printf("\r\n3. Writing data to memory\r\n");
    result = cy_serial_flash_qspi_write(ext_mem_address, PACKET_SIZE, tx_buf);
    check_status("Writing to memory failed", result);
    print_array("Written Data", tx_buf, PACKET_SIZE);

    /* Read back after Write for verification */
    printf("\r\n4. Reading back for verification\r\n");
    result = cy_serial_flash_qspi_read(ext_mem_address, PACKET_SIZE, rx_buf);
    check_status("Reading memory failed", result);
    print_array("Received Data", rx_buf, PACKET_SIZE);

    /* Check if the transmitted and received arrays are equal */
    check_status("Read data does not match with written data. Read/Write operation failed.",
            memcmp(tx_buf, rx_buf, PACKET_SIZE));

    printf("\r\n================================================================================\r\n");
    printf("\r\nSUCCESS: Read data matches with written data!\r\n");
    printf("\r\n================================================================================\r\n");

    for (;;)
    {
        cyhal_gpio_toggle(CYBSP_USER_LED);
        cyhal_system_delay_ms(LED_TOGGLE_DELAY_MSEC);
    }
}


/* [] END OF FILE */
