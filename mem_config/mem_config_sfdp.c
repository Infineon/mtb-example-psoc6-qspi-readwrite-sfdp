/******************************************************************************
* File Name: mem_config_sfdp.c
*
* Description: This file contains the memory configuration structures to use
*              with the QSPI MemSlot driver (cy_smif_memslot.c/.h). This file
*              is generated first using the QSPI Configurator tool and then
*              some structures have been renamed to avoid collision with the 
*              memory configuration present in the BSP. 
*
* Related Document: See README.md
*
*******************************************************************************
* Copyright 2019-2021, Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.  All rights reserved.
*
* This software, including source code, documentation and related
* materials ("Software") is owned by Cypress Semiconductor Corporation
* or one of its affiliates ("Cypress") and is protected by and subject to
* worldwide patent protection (United States and foreign),
* United States copyright laws and international treaty provisions.
* Therefore, you may use this Software only as provided in the license
* agreement accompanying the software package from which you
* obtained this Software ("EULA").
* If no EULA applies, Cypress hereby grants you a personal, non-exclusive,
* non-transferable license to copy, modify, and compile the Software
* source code solely for use in connection with Cypress's
* integrated circuit products.  Any reproduction, modification, translation,
* compilation, or representation of this Software except as specified
* above is prohibited without the express written permission of Cypress.
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
* including Cypress's product in a High Risk Product, the manufacturer
* of such system or application assumes all risk of such use and in doing
* so agrees to indemnify Cypress against all liability.
*******************************************************************************/

#include "mem_config_sfdp.h"

cy_stc_smif_mem_cmd_t SFDP_SlaveSlot_0_readCmd =
{
    /* The 8-bit command. 1 x I/O read command. */
    .command = 0x00U,
    /* The width of the command transfer. */
    .cmdWidth = CY_SMIF_WIDTH_SINGLE,
    /* The width of the address transfer. */
    .addrWidth = CY_SMIF_WIDTH_SINGLE,
    /* The 8-bit mode byte. This value is 0xFFFFFFFF when there is no mode present. */
    .mode = 0xFFFFFFFFU,
    /* The width of the mode command transfer. */
    .modeWidth = CY_SMIF_WIDTH_SINGLE,
    /* The number of dummy cycles. A zero value suggests no dummy cycles. */
    .dummyCycles = 0U,
    /* The width of the data transfer. */
    .dataWidth = CY_SMIF_WIDTH_SINGLE,
#if (CY_IP_MXSMIF_VERSION >= 3)
    /* The Data rate of data */
    .dataRate = CY_SMIF_SDR,
    /* This specifies the presence of the dummy field */
    .dummyCyclesPresence = CY_SMIF_NOT_PRESENT,
    /* This specifies the presence of the mode field */
    .modePresence = CY_SMIF_NOT_PRESENT,
    /* The high byte of a 16-bit mode. This value is 0x0 when there is no higher byte mode present */
    .modeH = 0x00,
    /* The Data rate of mode */
    .modeRate = CY_SMIF_SDR,
    /* The Data rate of address */
    .addrRate = CY_SMIF_SDR,
    /* This specifies the width of the command field */
    .cmdPresence = CY_SMIF_PRESENT_1BYTE,
    /* The high byte of a 16-bit command. This value is 0x0 when there is no higher byte command present */
    .commandH = 0x00,
    /* The Data rate of command */
    .cmdRate = CY_SMIF_SDR
#endif /* CY_IP_MXSMIF_VERSION */
};

cy_stc_smif_mem_cmd_t SFDP_SlaveSlot_0_writeEnCmd =
{
    /* The 8-bit command. 1 x I/O read command. */
    .command = 0x00U,
    /* The width of the command transfer. */
    .cmdWidth = CY_SMIF_WIDTH_SINGLE,
    /* The width of the address transfer. */
    .addrWidth = CY_SMIF_WIDTH_SINGLE,
    /* The 8-bit mode byte. This value is 0xFFFFFFFF when there is no mode present. */
    .mode = 0xFFFFFFFFU,
    /* The width of the mode command transfer. */
    .modeWidth = CY_SMIF_WIDTH_SINGLE,
    /* The number of dummy cycles. A zero value suggests no dummy cycles. */
    .dummyCycles = 0U,
    /* The width of the data transfer. */
    .dataWidth = CY_SMIF_WIDTH_SINGLE,
#if (CY_IP_MXSMIF_VERSION >= 3)
    /* The Data rate of data */
    .dataRate = CY_SMIF_SDR,
    /* This specifies the presence of the dummy field */
    .dummyCyclesPresence = CY_SMIF_NOT_PRESENT,
    /* This specifies the presence of the mode field */
    .modePresence = CY_SMIF_NOT_PRESENT,
    /* The high byte of a 16-bit mode. This value is 0x0 when there is no higher byte mode present */
    .modeH = 0x00,
    /* The Data rate of mode */
    .modeRate = CY_SMIF_SDR,
    /* The Data rate of address */
    .addrRate = CY_SMIF_SDR,
    /* This specifies the width of the command field */
    .cmdPresence = CY_SMIF_PRESENT_1BYTE,
    /* The high byte of a 16-bit command. This value is 0x0 when there is no higher byte command present */
    .commandH = 0x00,
    /* The Data rate of command */
    .cmdRate = CY_SMIF_SDR
#endif /* CY_IP_MXSMIF_VERSION */
};

cy_stc_smif_mem_cmd_t SFDP_SlaveSlot_0_writeDisCmd =
{
    /* The 8-bit command. 1 x I/O read command. */
    .command = 0x00U,
    /* The width of the command transfer. */
    .cmdWidth = CY_SMIF_WIDTH_SINGLE,
    /* The width of the address transfer. */
    .addrWidth = CY_SMIF_WIDTH_SINGLE,
    /* The 8-bit mode byte. This value is 0xFFFFFFFF when there is no mode present. */
    .mode = 0xFFFFFFFFU,
    /* The width of the mode command transfer. */
    .modeWidth = CY_SMIF_WIDTH_SINGLE,
    /* The number of dummy cycles. A zero value suggests no dummy cycles. */
    .dummyCycles = 0U,
    /* The width of the data transfer. */
    .dataWidth = CY_SMIF_WIDTH_SINGLE,
#if (CY_IP_MXSMIF_VERSION >= 3)
    /* The Data rate of data */
    .dataRate = CY_SMIF_SDR,
    /* This specifies the presence of the dummy field */
    .dummyCyclesPresence = CY_SMIF_NOT_PRESENT,
    /* This specifies the presence of the mode field */
    .modePresence = CY_SMIF_NOT_PRESENT,
    /* The high byte of a 16-bit mode. This value is 0x0 when there is no higher byte mode present */
    .modeH = 0x00,
    /* The Data rate of mode */
    .modeRate = CY_SMIF_SDR,
    /* The Data rate of address */
    .addrRate = CY_SMIF_SDR,
    /* This specifies the width of the command field */
    .cmdPresence = CY_SMIF_PRESENT_1BYTE,
    /* The high byte of a 16-bit command. This value is 0x0 when there is no higher byte command present */
    .commandH = 0x00,
    /* The Data rate of command */
    .cmdRate = CY_SMIF_SDR
#endif /* CY_IP_MXSMIF_VERSION */
};

cy_stc_smif_mem_cmd_t SFDP_SlaveSlot_0_eraseCmd =
{
    /* The 8-bit command. 1 x I/O read command. */
    .command = 0x00U,
    /* The width of the command transfer. */
    .cmdWidth = CY_SMIF_WIDTH_SINGLE,
    /* The width of the address transfer. */
    .addrWidth = CY_SMIF_WIDTH_SINGLE,
    /* The 8-bit mode byte. This value is 0xFFFFFFFF when there is no mode present. */
    .mode = 0xFFFFFFFFU,
    /* The width of the mode command transfer. */
    .modeWidth = CY_SMIF_WIDTH_SINGLE,
    /* The number of dummy cycles. A zero value suggests no dummy cycles. */
    .dummyCycles = 0U,
    /* The width of the data transfer. */
    .dataWidth = CY_SMIF_WIDTH_SINGLE,
#if (CY_IP_MXSMIF_VERSION >= 3)
    /* The Data rate of data */
    .dataRate = CY_SMIF_SDR,
    /* This specifies the presence of the dummy field */
    .dummyCyclesPresence = CY_SMIF_NOT_PRESENT,
    /* This specifies the presence of the mode field */
    .modePresence = CY_SMIF_NOT_PRESENT,
    /* The high byte of a 16-bit mode. This value is 0x0 when there is no higher byte mode present */
    .modeH = 0x00,
    /* The Data rate of mode */
    .modeRate = CY_SMIF_SDR,
    /* The Data rate of address */
    .addrRate = CY_SMIF_SDR,
    /* This specifies the width of the command field */
    .cmdPresence = CY_SMIF_PRESENT_1BYTE,
    /* The high byte of a 16-bit command. This value is 0x0 when there is no higher byte command present */
    .commandH = 0x00,
    /* The Data rate of command */
    .cmdRate = CY_SMIF_SDR
#endif /* CY_IP_MXSMIF_VERSION */
};

cy_stc_smif_mem_cmd_t SFDP_SlaveSlot_0_chipEraseCmd =
{
    /* The 8-bit command. 1 x I/O read command. */
    .command = 0x00U,
    /* The width of the command transfer. */
    .cmdWidth = CY_SMIF_WIDTH_SINGLE,
    /* The width of the address transfer. */
    .addrWidth = CY_SMIF_WIDTH_SINGLE,
    /* The 8-bit mode byte. This value is 0xFFFFFFFF when there is no mode present. */
    .mode = 0xFFFFFFFFU,
    /* The width of the mode command transfer. */
    .modeWidth = CY_SMIF_WIDTH_SINGLE,
    /* The number of dummy cycles. A zero value suggests no dummy cycles. */
    .dummyCycles = 0U,
    /* The width of the data transfer. */
    .dataWidth = CY_SMIF_WIDTH_SINGLE,
#if (CY_IP_MXSMIF_VERSION >= 3)
    /* The Data rate of data */
    .dataRate = CY_SMIF_SDR,
    /* This specifies the presence of the dummy field */
    .dummyCyclesPresence = CY_SMIF_NOT_PRESENT,
    /* This specifies the presence of the mode field */
    .modePresence = CY_SMIF_NOT_PRESENT,
    /* The high byte of a 16-bit mode. This value is 0x0 when there is no higher byte mode present */
    .modeH = 0x00,
    /* The Data rate of mode */
    .modeRate = CY_SMIF_SDR,
    /* The Data rate of address */
    .addrRate = CY_SMIF_SDR,
    /* This specifies the width of the command field */
    .cmdPresence = CY_SMIF_PRESENT_1BYTE,
    /* The high byte of a 16-bit command. This value is 0x0 when there is no higher byte command present */
    .commandH = 0x00,
    /* The Data rate of command */
    .cmdRate = CY_SMIF_SDR
#endif /* CY_IP_MXSMIF_VERSION */
};

cy_stc_smif_mem_cmd_t SFDP_SlaveSlot_0_programCmd =
{
    /* The 8-bit command. 1 x I/O read command. */
    .command = 0x00U,
    /* The width of the command transfer. */
    .cmdWidth = CY_SMIF_WIDTH_SINGLE,
    /* The width of the address transfer. */
    .addrWidth = CY_SMIF_WIDTH_SINGLE,
    /* The 8-bit mode byte. This value is 0xFFFFFFFF when there is no mode present. */
    .mode = 0xFFFFFFFFU,
    /* The width of the mode command transfer. */
    .modeWidth = CY_SMIF_WIDTH_SINGLE,
    /* The number of dummy cycles. A zero value suggests no dummy cycles. */
    .dummyCycles = 0U,
    /* The width of the data transfer. */
    .dataWidth = CY_SMIF_WIDTH_SINGLE,
#if (CY_IP_MXSMIF_VERSION >= 3)
    /* The Data rate of data */
    .dataRate = CY_SMIF_SDR,
    /* This specifies the presence of the dummy field */
    .dummyCyclesPresence = CY_SMIF_NOT_PRESENT,
    /* This specifies the presence of the mode field */
    .modePresence = CY_SMIF_NOT_PRESENT,
    /* The high byte of a 16-bit mode. This value is 0x0 when there is no higher byte mode present */
    .modeH = 0x00,
    /* The Data rate of mode */
    .modeRate = CY_SMIF_SDR,
    /* The Data rate of address */
    .addrRate = CY_SMIF_SDR,
    /* This specifies the width of the command field */
    .cmdPresence = CY_SMIF_PRESENT_1BYTE,
    /* The high byte of a 16-bit command. This value is 0x0 when there is no higher byte command present */
    .commandH = 0x00,
    /* The Data rate of command */
    .cmdRate = CY_SMIF_SDR
#endif /* CY_IP_MXSMIF_VERSION */
};

cy_stc_smif_mem_cmd_t SFDP_SlaveSlot_0_readStsRegQeCmd =
{
    /* The 8-bit command. 1 x I/O read command. */
    .command = 0x00U,
    /* The width of the command transfer. */
    .cmdWidth = CY_SMIF_WIDTH_SINGLE,
    /* The width of the address transfer. */
    .addrWidth = CY_SMIF_WIDTH_SINGLE,
    /* The 8-bit mode byte. This value is 0xFFFFFFFF when there is no mode present. */
    .mode = 0xFFFFFFFFU,
    /* The width of the mode command transfer. */
    .modeWidth = CY_SMIF_WIDTH_SINGLE,
    /* The number of dummy cycles. A zero value suggests no dummy cycles. */
    .dummyCycles = 0U,
    /* The width of the data transfer. */
    .dataWidth = CY_SMIF_WIDTH_SINGLE,
#if (CY_IP_MXSMIF_VERSION >= 3)
    /* The Data rate of data */
    .dataRate = CY_SMIF_SDR,
    /* This specifies the presence of the dummy field */
    .dummyCyclesPresence = CY_SMIF_NOT_PRESENT,
    /* This specifies the presence of the mode field */
    .modePresence = CY_SMIF_NOT_PRESENT,
    /* The high byte of a 16-bit mode. This value is 0x0 when there is no higher byte mode present */
    .modeH = 0x00,
    /* The Data rate of mode */
    .modeRate = CY_SMIF_SDR,
    /* The Data rate of address */
    .addrRate = CY_SMIF_SDR,
    /* This specifies the width of the command field */
    .cmdPresence = CY_SMIF_PRESENT_1BYTE,
    /* The high byte of a 16-bit command. This value is 0x0 when there is no higher byte command present */
    .commandH = 0x00,
    /* The Data rate of command */
    .cmdRate = CY_SMIF_SDR
#endif /* CY_IP_MXSMIF_VERSION */
};

cy_stc_smif_mem_cmd_t SFDP_SlaveSlot_0_readStsRegWipCmd =
{
    /* The 8-bit command. 1 x I/O read command. */
    .command = 0x00U,
    /* The width of the command transfer. */
    .cmdWidth = CY_SMIF_WIDTH_SINGLE,
    /* The width of the address transfer. */
    .addrWidth = CY_SMIF_WIDTH_SINGLE,
    /* The 8-bit mode byte. This value is 0xFFFFFFFF when there is no mode present. */
    .mode = 0xFFFFFFFFU,
    /* The width of the mode command transfer. */
    .modeWidth = CY_SMIF_WIDTH_SINGLE,
    /* The number of dummy cycles. A zero value suggests no dummy cycles. */
    .dummyCycles = 0U,
    /* The width of the data transfer. */
    .dataWidth = CY_SMIF_WIDTH_SINGLE,
#if (CY_IP_MXSMIF_VERSION >= 3)
    /* The Data rate of data */
    .dataRate = CY_SMIF_SDR,
    /* This specifies the presence of the dummy field */
    .dummyCyclesPresence = CY_SMIF_NOT_PRESENT,
    /* This specifies the presence of the mode field */
    .modePresence = CY_SMIF_NOT_PRESENT,
    /* The high byte of a 16-bit mode. This value is 0x0 when there is no higher byte mode present */
    .modeH = 0x00,
    /* The Data rate of mode */
    .modeRate = CY_SMIF_SDR,
    /* The Data rate of address */
    .addrRate = CY_SMIF_SDR,
    /* This specifies the width of the command field */
    .cmdPresence = CY_SMIF_PRESENT_1BYTE,
    /* The high byte of a 16-bit command. This value is 0x0 when there is no higher byte command present */
    .commandH = 0x00,
    /* The Data rate of command */
    .cmdRate = CY_SMIF_SDR
#endif /* CY_IP_MXSMIF_VERSION */
};

cy_stc_smif_mem_cmd_t SFDP_SlaveSlot_0_writeStsRegQeCmd =
{
    /* The 8-bit command. 1 x I/O read command. */
    .command = 0x00U,
    /* The width of the command transfer. */
    .cmdWidth = CY_SMIF_WIDTH_SINGLE,
    /* The width of the address transfer. */
    .addrWidth = CY_SMIF_WIDTH_SINGLE,
    /* The 8-bit mode byte. This value is 0xFFFFFFFF when there is no mode present. */
    .mode = 0xFFFFFFFFU,
    /* The width of the mode command transfer. */
    .modeWidth = CY_SMIF_WIDTH_SINGLE,
    /* The number of dummy cycles. A zero value suggests no dummy cycles. */
    .dummyCycles = 0U,
    /* The width of the data transfer. */
    .dataWidth = CY_SMIF_WIDTH_SINGLE,
#if (CY_IP_MXSMIF_VERSION >= 3)
    /* The Data rate of data */
    .dataRate = CY_SMIF_SDR,
    /* This specifies the presence of the dummy field */
    .dummyCyclesPresence = CY_SMIF_NOT_PRESENT,
    /* This specifies the presence of the mode field */
    .modePresence = CY_SMIF_NOT_PRESENT,
    /* The high byte of a 16-bit mode. This value is 0x0 when there is no higher byte mode present */
    .modeH = 0x00,
    /* The Data rate of mode */
    .modeRate = CY_SMIF_SDR,
    /* The Data rate of address */
    .addrRate = CY_SMIF_SDR,
    /* This specifies the width of the command field */
    .cmdPresence = CY_SMIF_PRESENT_1BYTE,
    /* The high byte of a 16-bit command. This value is 0x0 when there is no higher byte command present */
    .commandH = 0x00,
    /* The Data rate of command */
    .cmdRate = CY_SMIF_SDR
#endif /* CY_IP_MXSMIF_VERSION */
};

cy_stc_smif_mem_cmd_t SFDP_SlaveSlot_0_readSfdpCmd =
{
    /* The 8-bit command. 1 x I/O read command. */
    .command = 0x5AU,
    /* The width of the command transfer. */
    .cmdWidth = CY_SMIF_WIDTH_SINGLE,
    /* The width of the address transfer. */
    .addrWidth = CY_SMIF_WIDTH_SINGLE,
    /* The 8-bit mode byte. This value is 0xFFFFFFFF when there is no mode present. */
    .mode = 0xFFFFFFFFU,
    /* The width of the mode command transfer. */
    .modeWidth = CY_SMIF_WIDTH_SINGLE,
    /* The number of dummy cycles. A zero value suggests no dummy cycles. */
    .dummyCycles = 8U,
    /* The width of the data transfer. */
    .dataWidth = CY_SMIF_WIDTH_SINGLE
};

#if (CY_SMIF_DRV_VERSION_MAJOR > 1) || (CY_SMIF_DRV_VERSION_MINOR >= 50)
static cy_stc_smif_hybrid_region_info_t SFDP_SlaveSlot_0_regionInfoStorage[16];

static cy_stc_smif_hybrid_region_info_t *SFDP_SlaveSlot_0_regionInfo[16] = {
    &SFDP_SlaveSlot_0_regionInfoStorage[0],
    &SFDP_SlaveSlot_0_regionInfoStorage[1],
    &SFDP_SlaveSlot_0_regionInfoStorage[2],
    &SFDP_SlaveSlot_0_regionInfoStorage[3],
    &SFDP_SlaveSlot_0_regionInfoStorage[4],
    &SFDP_SlaveSlot_0_regionInfoStorage[5],
    &SFDP_SlaveSlot_0_regionInfoStorage[6],
    &SFDP_SlaveSlot_0_regionInfoStorage[7],
    &SFDP_SlaveSlot_0_regionInfoStorage[8],
    &SFDP_SlaveSlot_0_regionInfoStorage[9],
    &SFDP_SlaveSlot_0_regionInfoStorage[10],
    &SFDP_SlaveSlot_0_regionInfoStorage[11],
    &SFDP_SlaveSlot_0_regionInfoStorage[12],
    &SFDP_SlaveSlot_0_regionInfoStorage[13],
    &SFDP_SlaveSlot_0_regionInfoStorage[14],
    &SFDP_SlaveSlot_0_regionInfoStorage[15]
};
#endif

cy_stc_smif_mem_device_cfg_t deviceCfg_SFDP_SlaveSlot_0 =
{
    /* Specifies the number of address bytes used by the memory slave device. */
    .numOfAddrBytes = 0x03U,
    /* The size of the memory. */
    .memSize = 0x0000100U,
    /* Specifies the Read command. */
    .readCmd = &SFDP_SlaveSlot_0_readCmd,
    /* Specifies the Write Enable command. */
    .writeEnCmd = &SFDP_SlaveSlot_0_writeEnCmd,
    /* Specifies the Write Disable command. */
    .writeDisCmd = &SFDP_SlaveSlot_0_writeDisCmd,
    /* Specifies the Erase command. */
    .eraseCmd = &SFDP_SlaveSlot_0_eraseCmd,
    /* Specifies the sector size of each erase. */
    .eraseSize = 0x0001000U,
    /* Specifies the Chip Erase command. */
    .chipEraseCmd = &SFDP_SlaveSlot_0_chipEraseCmd,
    /* Specifies the Program command. */
    .programCmd = &SFDP_SlaveSlot_0_programCmd,
    /* Specifies the page size for programming. */
    .programSize = 0x0000100U,
    /* Specifies the command to read the QE-containing status register. */
    .readStsRegQeCmd = &SFDP_SlaveSlot_0_readStsRegQeCmd,
    /* Specifies the command to read the WIP-containing status register. */
    .readStsRegWipCmd = &SFDP_SlaveSlot_0_readStsRegWipCmd,
    /* Specifies the read SFDP command */
    .readSfdpCmd = &SFDP_SlaveSlot_0_readSfdpCmd,
    /* Specifies the command to write into the QE-containing status register. */
    .writeStsRegQeCmd = &SFDP_SlaveSlot_0_writeStsRegQeCmd,
    /* The mask for the status register. */
    .stsRegBusyMask = 0x00U,
    /* The mask for the status register. */
    .stsRegQuadEnableMask = 0x00U,
    /* The max time for the erase type-1 cycle-time in ms. */
    .eraseTime = 1U,
    /* The max time for the chip-erase cycle-time in ms. */
    .chipEraseTime = 16U,
    /* The max time for the page-program cycle-time in us. */
    .programTime = 8U,
#if (CY_SMIF_DRV_VERSION_MAJOR > 1) || (CY_SMIF_DRV_VERSION_MINOR >= 50)
    /* Points to NULL or to structure with info about sectors for hybrid memory. */
    .hybridRegionCount = 0U,
    .hybridRegionInfo = SFDP_SlaveSlot_0_regionInfo
#endif
};

const cy_stc_smif_mem_config_t SFDP_SlaveSlot_0 =
{
    /* Determines the slot number where the memory device is placed. */
    .slaveSelect = CY_SMIF_SLAVE_SELECT_0,
    /* Flags. */
#if (CY_IP_MXSMIF_VERSION >= 3)
    .flags = CY_SMIF_FLAG_SMIF_REV_3 | CY_SMIF_FLAG_WR_EN | CY_SMIF_FLAG_DETECT_SFDP,
#else
    .flags = CY_SMIF_FLAG_WR_EN | CY_SMIF_FLAG_DETECT_SFDP,
#endif /* CY_IP_MXSMIF_VERSION */
    /* The data-line selection options for a slave device. */
    .dataSelect = CY_SMIF_DATA_SEL0,
    /* The base address the memory slave is mapped to in the PSoC memory map.
    Valid when the memory-mapped mode is enabled. */
    .baseAddress = 0x18000000U,
    /* The size allocated in the PSoC memory map, for the memory slave device.
    The size is allocated from the base address. Valid when the memory mapped mode is enabled. */
    .memMappedSize = 0x4000000U,
    /* If this memory device is one of the devices in the dual quad SPI configuration.
    Valid when the memory mapped mode is enabled. */
    .dualQuadSlots = 0,
    /* The configuration of the device. */
    .deviceCfg = &deviceCfg_SFDP_SlaveSlot_0,
#if (CY_IP_MXSMIF_VERSION >= 3)
    /** Continous transfer merge timeout.
     * After this period the memory device is deselected. A later transfer, even from a
     * continuous address, starts with the overhead phases (command, address, mode, dummy cycles).
     * This configuration parameter is available for CAT1B devices. */
    .mergeTimeout = 0
#endif /* CY_IP_MXSMIF_VERSION */
};

const cy_stc_smif_mem_config_t* const smifMemConfigsSfdp[CY_SMIF_DEVICE_NUM] = {
   &SFDP_SlaveSlot_0
};

const cy_stc_smif_block_config_t smifBlockConfigSfdp =
{
    /* The number of SMIF memories defined. */
    .memCount = CY_SMIF_DEVICE_NUM,
    /* The pointer to the array of memory config structures of size memCount. */
    .memConfig = (cy_stc_smif_mem_config_t**)smifMemConfigsSfdp,
    /* The version of the SMIF driver. */
    .majorVersion = CY_SMIF_DRV_VERSION_MAJOR,
    /* The version of the SMIF driver. */
    .minorVersion = CY_SMIF_DRV_VERSION_MINOR
};

