/*
 * ATmega32A_FirmWare.c
 *
 * Created: 8/4/2019 9:17:00 PM
 *  Author: ahmed
 */ 

 #include <ATmega32A_GPIO.h>


int main(void)
{
	

  
	//CONFIGURE PINS AS OUTPUT
	GPIO_DirectionSet(GPIOA,PIN0,OUTPUT);
	

	
    while(1)
    {
		//MANAGMENT OF FIRST PUSH BUTTON
		
				GPIO_OutputHandle(GPIOA,PIN0,HIGH);
		
        
    }
	
}


