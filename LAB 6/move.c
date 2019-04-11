#include<reg51.h>
void delay(unsigned int time){
	unsigned int i, j;
	for(i = 0;i < time;i++)
		for(j = 0;j < 1275;j++);
}
void main(void){
	code unsigned char originalData[] = "HELLO"; 
	unsigned char movedData[5];
	unsigned int i = 0;
	for(;i < 5;i++){
		movedData[i] = originalData[i];
		P1 = movedData[i];
		delay(250);
	}	
}
