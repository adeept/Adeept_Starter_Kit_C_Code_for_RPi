/*
* File name  : 02_buzzer.c
* Description: ...
* Website    : www.adeept.com
* E-mail     : support@adeept.com
* Author     : Jason
* Date       : 2015/05/02
*/
#include <wiringPi.h>
#include <stdio.h>

#define BeepPin 0

int main(void)
{
	if(wiringPiSetup() == -1){ //when initialize wiring failed,print messageto screen
		printf("setup wiringPi failed !");
		return 1; 
	}
	
	pinMode(BeepPin, OUTPUT);   //set GPIO0 output

	while(1){
		digitalWrite(BeepPin, LOW);  //beep on
		delay(100);                  //delay
		digitalWrite(BeepPin, HIGH); //beep off
		delay(100);                  //delay
	}

	return 0;
}

