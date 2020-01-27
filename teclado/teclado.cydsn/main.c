#include "project.h"
#include "device.h"
#include "string.h"
#include "project.h"
#include <stdio.h>
#include <stdlib.h>
#define VMAX 400;

int flag=1;
char valor[4];
uint8 contador;
volatile uint32 counter,event=0;
volatile uint16 tiempo=0;
volatile uint32 temp,diff1=0;
volatile uint16 pwm_Com=0;
volatile uint16 speed,speed_read=0; //default user_speed;
int flag1=0;
int flag_init=0;
char str[16],str2[16];


char8 Keypad_1_Key[4][4] = {
					{'1','2','3','A'},		//Row 0
					
					{'4','5','6','B'},		//Row 1
										
					{'7','8','9','C'},		//Row 2
					
					{'*','0','#','D'}		//Row 3
				  };




/////////////////convertir velocidad usuario a pwm valor//////////////////
void Convert_Speed(){} 
//////////////////////////////////////////////////////////////////////////

///////////colocamos la velocidad/////////////////////////////////////////
void Set_Speed(){ //Proposito Es Colocar la velocidad  
    PWM_WriteCompare(pwm_Com); 
}
//////////////////////////////////////////////////////////////////////////

/////////////////////funcion de control///////////////////////////////////
void Control_Motor(){if(speed_read != speed){pwm_Com++;PWM_WriteCompare(pwm_Com);} } 
//////////////////////////////////////////////////////////////////////////

/////////////////////////////configuracion del timer//////////////////////
CY_ISR(Timer_ISR){ //AL SEGUNDO
if(tiempo<1){
    tiempo++;
    diff1=0;
    temp=counter;
    speed_read=temp;
    Pin_2_Write(1);
}else{
    tiempo=0; 
    Pin_2_Write(0);
    counter=0;
}
 isr_1_ClearPending();
}
//////////////////////////////////////////////////////////////////////////

//////////////////funcion de lectura del encoder//////////////////////////
CY_ISR(Encoder_ISR){
 uint8 flag2=0;
if(Encoder_Read()==1){ 
     flag2=1;
     CyDelayUs(2000);
}
     if(flag2==1) 
     counter++;
     Encoder_ClearInterrupt();
}
//////////////////////////////////////////////////////////////////////////

//////////////////funcion de sincronismo y cruce por cero/////////////////
CY_ISR(sync){
 flag_init=(flag1==1)?1:0;
 sync_ClearInterrupt();
}
//////////////////////////////////////////////////////////////////////////

////////////////////obtenemos de valor de velocidad///////////////////////
CY_ISR(press_ISR){

int valid=0;  //variable de control de interrupcion  
int cont=0;// variable de conteo
char t;//variable de letra
    while (valid==0 && flag==1){                   
            LCD_Position(0,0);
            LCD_PrintString("vel de control");
            t=Keypad_1_GetButton();//obtenemos la letra
            CyDelay(200);          //delay necesario para leer bien el teclado 
            LCD_Position(1,0);
            LCD_PrintString("valor:");             
            LCD_Position(1,6+cont);       
            LCD_PutChar(t);
            if (Keypad_1_GetButton() == 'A'){//aceptacion de valor introducido
                valor[cont]=t;// agregamos valor al array
                CyDelay(300);//delay para leer la aceptacion
                //LCD_Position(1,6+cont);
                //LCD_PutChar(valor[cont]);                            
                cont++;   //amentamos contador
                if ((cont>=4 && Keypad_1_GetButton() == 'B')|| flag==0){ //decicion de salir de interrupcion                    
                    valid=1;//terminamos control
                    flag=0;//no dejamos que vuelva a entrar a la interrupcion
                    flag1=1;
                    flag_init=1;
                    isr_press_ClearPending();
                }
            }
           
    }
    
}
//////////////////////////////////////////////////////////////////////////


int main(void)
{
    //--------------interrupcione-----------
    CyGlobalIntEnable;
    isr_press_StartEx(press_ISR);
    isr_1_StartEx(Timer_ISR);
    isr_Encoder_StartEx(Encoder_ISR);
    isr_sync_StartEx(sync); 
    
   //--------incio de LCD---------------
    LCD_Start();
    
    //----variables--------------      
    event=0;
    char8 i;
    
    for(;;)
    {
        if(flag_init==1){
            PWM_Start();
            Timer_Start();
        }        
        //LCD_Position(1,2);
        sprintf(str,"%u",speed_read);
        //LCD_PrintString(str); 
        //LCD_Position(0,2);       
        //sprintf(str2,"%lu",diff1);
       // LCD_PrintString(str2);
        Set_Speed();
       
        i=speed;   
        CyDelay(200);
        LCD_Position(0,0);
        LCD_PrintString("Vel control:");
        LCD_Position(0,12);
        LCD_PrintString(valor);//velocidad de control
        LCD_Position(1,0);
        LCD_PrintString("Vel sensor:");
        LCD_Position(01,11);
        LCD_PrintString(str);//velocidad medida por el sensor
    }
    
}







