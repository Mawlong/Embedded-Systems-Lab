#include<reg51.h>
unsigned int adata[5] = {1,2,3,4,5};
void main(void){
	unsigned int i = 0;
	unsigned int sum = 0;
	unsigned int avg = 0;
	for(;i < 5;i++){
		sum = sum + adata[i];
	}
	avg = sum / 5;
	P1 = avg;
}