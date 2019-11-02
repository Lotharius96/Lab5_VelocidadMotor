;
; File Name: cyfitterrv.inc
; 
; PSoC Creator  4.2
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv.inc
    GET cydevicerv_trm.inc

; LCD
LCD_LCDPort__0__INTTYPE EQU CYREG_PICU12_INTTYPE0
LCD_LCDPort__0__MASK EQU 0x01
LCD_LCDPort__0__PC EQU CYREG_PRT12_PC0
LCD_LCDPort__0__PORT EQU 12
LCD_LCDPort__0__SHIFT EQU 0
LCD_LCDPort__1__INTTYPE EQU CYREG_PICU12_INTTYPE1
LCD_LCDPort__1__MASK EQU 0x02
LCD_LCDPort__1__PC EQU CYREG_PRT12_PC1
LCD_LCDPort__1__PORT EQU 12
LCD_LCDPort__1__SHIFT EQU 1
LCD_LCDPort__2__INTTYPE EQU CYREG_PICU12_INTTYPE2
LCD_LCDPort__2__MASK EQU 0x04
LCD_LCDPort__2__PC EQU CYREG_PRT12_PC2
LCD_LCDPort__2__PORT EQU 12
LCD_LCDPort__2__SHIFT EQU 2
LCD_LCDPort__3__INTTYPE EQU CYREG_PICU12_INTTYPE3
LCD_LCDPort__3__MASK EQU 0x08
LCD_LCDPort__3__PC EQU CYREG_PRT12_PC3
LCD_LCDPort__3__PORT EQU 12
LCD_LCDPort__3__SHIFT EQU 3
LCD_LCDPort__4__INTTYPE EQU CYREG_PICU12_INTTYPE4
LCD_LCDPort__4__MASK EQU 0x10
LCD_LCDPort__4__PC EQU CYREG_PRT12_PC4
LCD_LCDPort__4__PORT EQU 12
LCD_LCDPort__4__SHIFT EQU 4
LCD_LCDPort__5__INTTYPE EQU CYREG_PICU12_INTTYPE5
LCD_LCDPort__5__MASK EQU 0x20
LCD_LCDPort__5__PC EQU CYREG_PRT12_PC5
LCD_LCDPort__5__PORT EQU 12
LCD_LCDPort__5__SHIFT EQU 5
LCD_LCDPort__6__INTTYPE EQU CYREG_PICU12_INTTYPE6
LCD_LCDPort__6__MASK EQU 0x40
LCD_LCDPort__6__PC EQU CYREG_PRT12_PC6
LCD_LCDPort__6__PORT EQU 12
LCD_LCDPort__6__SHIFT EQU 6
LCD_LCDPort__AG EQU CYREG_PRT12_AG
LCD_LCDPort__BIE EQU CYREG_PRT12_BIE
LCD_LCDPort__BIT_MASK EQU CYREG_PRT12_BIT_MASK
LCD_LCDPort__BYP EQU CYREG_PRT12_BYP
LCD_LCDPort__DM0 EQU CYREG_PRT12_DM0
LCD_LCDPort__DM1 EQU CYREG_PRT12_DM1
LCD_LCDPort__DM2 EQU CYREG_PRT12_DM2
LCD_LCDPort__DR EQU CYREG_PRT12_DR
LCD_LCDPort__INP_DIS EQU CYREG_PRT12_INP_DIS
LCD_LCDPort__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
LCD_LCDPort__MASK EQU 0x7F
LCD_LCDPort__PORT EQU 12
LCD_LCDPort__PRT EQU CYREG_PRT12_PRT
LCD_LCDPort__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
LCD_LCDPort__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
LCD_LCDPort__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
LCD_LCDPort__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
LCD_LCDPort__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
LCD_LCDPort__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
LCD_LCDPort__PS EQU CYREG_PRT12_PS
LCD_LCDPort__SHIFT EQU 0
LCD_LCDPort__SIO_CFG EQU CYREG_PRT12_SIO_CFG
LCD_LCDPort__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
LCD_LCDPort__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
LCD_LCDPort__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
LCD_LCDPort__SLW EQU CYREG_PRT12_SLW

; Keypad_1
Keypad_1_Clock__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
Keypad_1_Clock__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
Keypad_1_Clock__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
Keypad_1_Clock__CFG2_SRC_SEL_MASK EQU 0x07
Keypad_1_Clock__INDEX EQU 0x00
Keypad_1_Clock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Keypad_1_Clock__PM_ACT_MSK EQU 0x01
Keypad_1_Clock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Keypad_1_Clock__PM_STBY_MSK EQU 0x01
Keypad_1_Column__0__INTTYPE EQU CYREG_PICU3_INTTYPE4
Keypad_1_Column__0__MASK EQU 0x10
Keypad_1_Column__0__PC EQU CYREG_PRT3_PC4
Keypad_1_Column__0__PORT EQU 3
Keypad_1_Column__0__SHIFT EQU 4
Keypad_1_Column__1__INTTYPE EQU CYREG_PICU3_INTTYPE5
Keypad_1_Column__1__MASK EQU 0x20
Keypad_1_Column__1__PC EQU CYREG_PRT3_PC5
Keypad_1_Column__1__PORT EQU 3
Keypad_1_Column__1__SHIFT EQU 5
Keypad_1_Column__2__INTTYPE EQU CYREG_PICU3_INTTYPE6
Keypad_1_Column__2__MASK EQU 0x40
Keypad_1_Column__2__PC EQU CYREG_PRT3_PC6
Keypad_1_Column__2__PORT EQU 3
Keypad_1_Column__2__SHIFT EQU 6
Keypad_1_Column__3__INTTYPE EQU CYREG_PICU3_INTTYPE7
Keypad_1_Column__3__MASK EQU 0x80
Keypad_1_Column__3__PC EQU CYREG_PRT3_PC7
Keypad_1_Column__3__PORT EQU 3
Keypad_1_Column__3__SHIFT EQU 7
Keypad_1_Column__AG EQU CYREG_PRT3_AG
Keypad_1_Column__AMUX EQU CYREG_PRT3_AMUX
Keypad_1_Column__BIE EQU CYREG_PRT3_BIE
Keypad_1_Column__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Keypad_1_Column__BYP EQU CYREG_PRT3_BYP
Keypad_1_Column__CTL EQU CYREG_PRT3_CTL
Keypad_1_Column__DM0 EQU CYREG_PRT3_DM0
Keypad_1_Column__DM1 EQU CYREG_PRT3_DM1
Keypad_1_Column__DM2 EQU CYREG_PRT3_DM2
Keypad_1_Column__DR EQU CYREG_PRT3_DR
Keypad_1_Column__INP_DIS EQU CYREG_PRT3_INP_DIS
Keypad_1_Column__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
Keypad_1_Column__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Keypad_1_Column__LCD_EN EQU CYREG_PRT3_LCD_EN
Keypad_1_Column__PORT EQU 3
Keypad_1_Column__PRT EQU CYREG_PRT3_PRT
Keypad_1_Column__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Keypad_1_Column__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Keypad_1_Column__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Keypad_1_Column__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Keypad_1_Column__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Keypad_1_Column__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Keypad_1_Column__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Keypad_1_Column__PS EQU CYREG_PRT3_PS
Keypad_1_Column__SLW EQU CYREG_PRT3_SLW
Keypad_1_Row__0__INTTYPE EQU CYREG_PICU3_INTTYPE0
Keypad_1_Row__0__MASK EQU 0x01
Keypad_1_Row__0__PC EQU CYREG_PRT3_PC0
Keypad_1_Row__0__PORT EQU 3
Keypad_1_Row__0__SHIFT EQU 0
Keypad_1_Row__1__INTTYPE EQU CYREG_PICU3_INTTYPE1
Keypad_1_Row__1__MASK EQU 0x02
Keypad_1_Row__1__PC EQU CYREG_PRT3_PC1
Keypad_1_Row__1__PORT EQU 3
Keypad_1_Row__1__SHIFT EQU 1
Keypad_1_Row__2__INTTYPE EQU CYREG_PICU3_INTTYPE2
Keypad_1_Row__2__MASK EQU 0x04
Keypad_1_Row__2__PC EQU CYREG_PRT3_PC2
Keypad_1_Row__2__PORT EQU 3
Keypad_1_Row__2__SHIFT EQU 2
Keypad_1_Row__3__INTTYPE EQU CYREG_PICU3_INTTYPE3
Keypad_1_Row__3__MASK EQU 0x08
Keypad_1_Row__3__PC EQU CYREG_PRT3_PC3
Keypad_1_Row__3__PORT EQU 3
Keypad_1_Row__3__SHIFT EQU 3
Keypad_1_Row__AG EQU CYREG_PRT3_AG
Keypad_1_Row__AMUX EQU CYREG_PRT3_AMUX
Keypad_1_Row__BIE EQU CYREG_PRT3_BIE
Keypad_1_Row__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Keypad_1_Row__BYP EQU CYREG_PRT3_BYP
Keypad_1_Row__CTL EQU CYREG_PRT3_CTL
Keypad_1_Row__DM0 EQU CYREG_PRT3_DM0
Keypad_1_Row__DM1 EQU CYREG_PRT3_DM1
Keypad_1_Row__DM2 EQU CYREG_PRT3_DM2
Keypad_1_Row__DR EQU CYREG_PRT3_DR
Keypad_1_Row__INP_DIS EQU CYREG_PRT3_INP_DIS
Keypad_1_Row__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
Keypad_1_Row__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Keypad_1_Row__LCD_EN EQU CYREG_PRT3_LCD_EN
Keypad_1_Row__PORT EQU 3
Keypad_1_Row__PRT EQU CYREG_PRT3_PRT
Keypad_1_Row__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Keypad_1_Row__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Keypad_1_Row__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Keypad_1_Row__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Keypad_1_Row__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Keypad_1_Row__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Keypad_1_Row__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Keypad_1_Row__PS EQU CYREG_PRT3_PS
Keypad_1_Row__SLW EQU CYREG_PRT3_SLW
Keypad_1_Status_Reg_sts_sts_reg__0__MASK EQU 0x01
Keypad_1_Status_Reg_sts_sts_reg__0__POS EQU 0
Keypad_1_Status_Reg_sts_sts_reg__1__MASK EQU 0x02
Keypad_1_Status_Reg_sts_sts_reg__1__POS EQU 1
Keypad_1_Status_Reg_sts_sts_reg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB05_06_ACTL
Keypad_1_Status_Reg_sts_sts_reg__16BIT_STATUS_REG EQU CYREG_B1_UDB05_06_ST
Keypad_1_Status_Reg_sts_sts_reg__2__MASK EQU 0x04
Keypad_1_Status_Reg_sts_sts_reg__2__POS EQU 2
Keypad_1_Status_Reg_sts_sts_reg__3__MASK EQU 0x08
Keypad_1_Status_Reg_sts_sts_reg__3__POS EQU 3
Keypad_1_Status_Reg_sts_sts_reg__4__MASK EQU 0x10
Keypad_1_Status_Reg_sts_sts_reg__4__POS EQU 4
Keypad_1_Status_Reg_sts_sts_reg__MASK EQU 0x1F
Keypad_1_Status_Reg_sts_sts_reg__MASK_REG EQU CYREG_B1_UDB05_MSK
Keypad_1_Status_Reg_sts_sts_reg__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB05_ACTL
Keypad_1_Status_Reg_sts_sts_reg__STATUS_REG EQU CYREG_B1_UDB05_ST

; Miscellaneous
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 18
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 18
CYDEV_CHIP_MEMBER_4D EQU 13
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 19
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 17
CYDEV_CHIP_MEMBER_4I EQU 23
CYDEV_CHIP_MEMBER_4J EQU 14
CYDEV_CHIP_MEMBER_4K EQU 15
CYDEV_CHIP_MEMBER_4L EQU 22
CYDEV_CHIP_MEMBER_4M EQU 21
CYDEV_CHIP_MEMBER_4N EQU 10
CYDEV_CHIP_MEMBER_4O EQU 7
CYDEV_CHIP_MEMBER_4P EQU 20
CYDEV_CHIP_MEMBER_4Q EQU 12
CYDEV_CHIP_MEMBER_4R EQU 8
CYDEV_CHIP_MEMBER_4S EQU 11
CYDEV_CHIP_MEMBER_4T EQU 9
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 16
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 24
CYDEV_CHIP_MEMBER_FM3 EQU 28
CYDEV_CHIP_MEMBER_FM4 EQU 29
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 25
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 26
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 27
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000000
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END