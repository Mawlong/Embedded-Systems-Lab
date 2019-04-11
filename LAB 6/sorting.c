#include<reg51.h>
void delay(unsigned int time){
	unsigned int i, j;
	for(i = 0;i < time;i++)
		for(j = 0;j < 1275;j++);
}
void main(void){
	unsigned int numbers[5] = {5,4,3,2,1};
	unsigned int i, j, t;
	for(i = 0;i < 4;i++){
		for(j = i + 1;j < 5;j++){
			if(numbers[i] > numbers[j]){
				t = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = t;
			}
		}
	}
	for(i = 0;i < 5;i++){
		P1 = numbers[i];
		delay(250);
	}
}
