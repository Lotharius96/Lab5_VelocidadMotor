/*******************************************************************************
* File Name: num_control.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_num_control_H) /* Pins num_control_H */
#define CY_PINS_num_control_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "num_control_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 num_control__PORT == 15 && ((num_control__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    num_control_Write(uint8 value);
void    num_control_SetDriveMode(uint8 mode);
uint8   num_control_ReadDataReg(void);
uint8   num_control_Read(void);
void    num_control_SetInterruptMode(uint16 position, uint16 mode);
uint8   num_control_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the num_control_SetDriveMode() function.
     *  @{
     */
        #define num_control_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define num_control_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define num_control_DM_RES_UP          PIN_DM_RES_UP
        #define num_control_DM_RES_DWN         PIN_DM_RES_DWN
        #define num_control_DM_OD_LO           PIN_DM_OD_LO
        #define num_control_DM_OD_HI           PIN_DM_OD_HI
        #define num_control_DM_STRONG          PIN_DM_STRONG
        #define num_control_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define num_control_MASK               num_control__MASK
#define num_control_SHIFT              num_control__SHIFT
#define num_control_WIDTH              1u

/* Interrupt constants */
#if defined(num_control__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in num_control_SetInterruptMode() function.
     *  @{
     */
        #define num_control_INTR_NONE      (uint16)(0x0000u)
        #define num_control_INTR_RISING    (uint16)(0x0001u)
        #define num_control_INTR_FALLING   (uint16)(0x0002u)
        #define num_control_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define num_control_INTR_MASK      (0x01u) 
#endif /* (num_control__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define num_control_PS                     (* (reg8 *) num_control__PS)
/* Data Register */
#define num_control_DR                     (* (reg8 *) num_control__DR)
/* Port Number */
#define num_control_PRT_NUM                (* (reg8 *) num_control__PRT) 
/* Connect to Analog Globals */                                                  
#define num_control_AG                     (* (reg8 *) num_control__AG)                       
/* Analog MUX bux enable */
#define num_control_AMUX                   (* (reg8 *) num_control__AMUX) 
/* Bidirectional Enable */                                                        
#define num_control_BIE                    (* (reg8 *) num_control__BIE)
/* Bit-mask for Aliased Register Access */
#define num_control_BIT_MASK               (* (reg8 *) num_control__BIT_MASK)
/* Bypass Enable */
#define num_control_BYP                    (* (reg8 *) num_control__BYP)
/* Port wide control signals */                                                   
#define num_control_CTL                    (* (reg8 *) num_control__CTL)
/* Drive Modes */
#define num_control_DM0                    (* (reg8 *) num_control__DM0) 
#define num_control_DM1                    (* (reg8 *) num_control__DM1)
#define num_control_DM2                    (* (reg8 *) num_control__DM2) 
/* Input Buffer Disable Override */
#define num_control_INP_DIS                (* (reg8 *) num_control__INP_DIS)
/* LCD Common or Segment Drive */
#define num_control_LCD_COM_SEG            (* (reg8 *) num_control__LCD_COM_SEG)
/* Enable Segment LCD */
#define num_control_LCD_EN                 (* (reg8 *) num_control__LCD_EN)
/* Slew Rate Control */
#define num_control_SLW                    (* (reg8 *) num_control__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define num_control_PRTDSI__CAPS_SEL       (* (reg8 *) num_control__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define num_control_PRTDSI__DBL_SYNC_IN    (* (reg8 *) num_control__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define num_control_PRTDSI__OE_SEL0        (* (reg8 *) num_control__PRTDSI__OE_SEL0) 
#define num_control_PRTDSI__OE_SEL1        (* (reg8 *) num_control__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define num_control_PRTDSI__OUT_SEL0       (* (reg8 *) num_control__PRTDSI__OUT_SEL0) 
#define num_control_PRTDSI__OUT_SEL1       (* (reg8 *) num_control__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define num_control_PRTDSI__SYNC_OUT       (* (reg8 *) num_control__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(num_control__SIO_CFG)
    #define num_control_SIO_HYST_EN        (* (reg8 *) num_control__SIO_HYST_EN)
    #define num_control_SIO_REG_HIFREQ     (* (reg8 *) num_control__SIO_REG_HIFREQ)
    #define num_control_SIO_CFG            (* (reg8 *) num_control__SIO_CFG)
    #define num_control_SIO_DIFF           (* (reg8 *) num_control__SIO_DIFF)
#endif /* (num_control__SIO_CFG) */

/* Interrupt Registers */
#if defined(num_control__INTSTAT)
    #define num_control_INTSTAT            (* (reg8 *) num_control__INTSTAT)
    #define num_control_SNAP               (* (reg8 *) num_control__SNAP)
    
	#define num_control_0_INTTYPE_REG 		(* (reg8 *) num_control__0__INTTYPE)
#endif /* (num_control__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_num_control_H */


/* [] END OF FILE */
