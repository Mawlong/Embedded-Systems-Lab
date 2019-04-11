#include<reg51.h>

unsigned int adata[5] = {1,2,3,4,5};

void main(void){
	unsigned int i = 1;
	unsigned int max = adata[0];
	
	for(i;i<5;i++)
		if(adata[i] >= max)
			max = adata[i];
	
	P1 = max;

	}