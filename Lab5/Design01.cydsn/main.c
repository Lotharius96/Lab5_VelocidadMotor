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
#include <stdio.h>
#include <stdlib.h>
volatile uint32 counter,event=0;
volatile uint16 tiempo=0;
volatile uint32 temp,diff1=0;
char str[16],str2[16];
CY_ISR(Timer_ISR){ //AL SEGUNDO
 if(tiempo<1){
  tiempo++;
    diff1=0;
//  diff1=((counter-temp)>0?(counter-temp):-(counter-temp));
  temp=counter;
//  temp=counter;
}else{
  diff1=((counter-temp)>0?(counter-temp):-(counter-temp));;
  tiempo=0;
  //uint32 diff1=0;
}
 isr_1_ClearPending();
}

CY_ISR(Encoder_ISR){
  pin1_Write(1);
//  CyDelayUs(3000); 
  uint8 flag=0;

 while(Encoder_Read()==0){ 
 flag=1;
 CyDelayUs(2000);
}
 if(flag==1) 
 counter++;

 Encoder_ClearInterrupt();
}

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    isr_1_StartEx(Timer_ISR);
    isr_Encoder_StartEx(Encoder_ISR);
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    LCD_Start();
 //   Timer_EnableTriggerMode;
    //Timer_Start();
    event=0;
//    Timer_ISR();
    for(;;)
    {
         pin1_Write(0);  
        Timer_Start();
        LCD_Position(1,2);
        sprintf(str,"%lu",counter);
        LCD_PrintString(str);        
      
        // CyDelay(1000);
//        if(Encoder_Read()==0)
//          counter++;
//        LCD_Position(1,2);
//        LCD_PrintDecUint16(counter);
         LCD_Position(0,2);       
        //uint16 num=((counter-temp)>0?(counter-temp):-(counter-temp));
        sprintf(str2,"%lu",diff1);
        LCD_PrintString(str2);
        /* Place your application code here. */
    }
}
//gf
/* [] END OF FILE */
