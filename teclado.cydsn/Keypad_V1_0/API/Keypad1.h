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

//#if !defined(`$INSTANCE_NAME`_H)
//#define `$INSTANCE_NAME`_H

uint8 `$INSTANCE_NAME`_GetCol(void);		//Returns value of column if a button is pressed

uint8 `$INSTANCE_NAME`_GetRow(void);		//Returns value of row if a button is pressed

uint8 `$INSTANCE_NAME`_GetButton(void);		//Returns the corresponding character from the Key array

char `$INSTANCE_NAME`_Key [4][4];							//Define the matrix array

//#endif

//[] END OF FILE
