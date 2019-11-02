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
#include "project.h"
#include "device.h"
volatile uint8 row,col;

char8 Keypad_1_Key[4][4] = {
					{'1','2','3','A'},		//Row 0
					
					{'4','5','6','B'},		//Row 1
										
					{'7','8','9','C'},		//Row 2
					
					{'*','0','#','D'}		//Row 3
				  };

int main(void)
{
    //CyGlobalIntEnable; /* Enable global interrupts. */
    LCD_Start();

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        char8 i;					
		
		i=Keypad_1_GetButton();		//Value recieved from Matrix	
        CyDelay(200);
        LCD_Position(0,1);
        LCD_PutChar(i);
		
    }
}

/* [] END OF FILE */
