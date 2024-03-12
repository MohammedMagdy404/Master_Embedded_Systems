#include "uart.h"

unsigned char stringBuffer[100] = "learn-in-depth:mohamed";
unsigned char const stringBuffer2[100] = "learn-in-depth:mohamed";

void main(void){
	uartSendString(stringBuffer);
}