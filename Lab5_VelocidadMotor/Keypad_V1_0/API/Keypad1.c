/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "cyfitter.h"
#include <device.h>

uint8 `$INSTANCE_NAME`_GetCol(void)
{
	uint8 Col;
		
	while(!(`$INSTANCE_NAME`_Status_Reg_Read() & 0x10));	//Wait for a valid press of button
	
	if(`$INSTANCE_NAME`_Status_Reg_Read() & 0x10)			//Check for a valid press of button
	{
		Col = `$INSTANCE_NAME`_Status_Reg_Read();
	}
	
	Col = (Col & 0x03);										//Extract correct Column
	
	return (Col);
}

uint8 `$INSTANCE_NAME`_GetRow(void)
{
	uint8 Row;
	
	while(!(`$INSTANCE_NAME`_Status_Reg_Read() & 0x10));	//Wait for a valid press of button
	
	if(`$INSTANCE_NAME`_Status_Reg_Read() & 0x10)			//Check for a valid press of button
	{
		Row = `$INSTANCE_NAME`_Status_Reg_Read();
	}
		
	Row = (Row & 0x0C) >> 2;								//Extract correct Row
	
	return Row;
}

uint8 `$INSTANCE_NAME`_GetButton(void)
{
	char8 Button;
	
	uint8 x,y;
	
	x = `$INSTANCE_NAME`_GetCol();
	
	y = `$INSTANCE_NAME`_GetRow();

	Button=`$INSTANCE_NAME`_Key[y][x];										//Assign correct Character
	
	while(!(`$INSTANCE_NAME`_Status_Reg_Read() & 0x10));	//Wait for a valid press of button
	
	return Button;
}

/* [] END OF FILE */
