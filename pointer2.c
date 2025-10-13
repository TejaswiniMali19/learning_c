#include<stdio.h>

int main(){
	
	int x =15;
	int *pr;
	//int *pr = &x;
	pr = &x;
	
	printf("\n Address of x = %u",&x);
	printf("\n Address of pr = %u",pr);
	
	printf("\n value of x = %d",x); 
	printf("\n value of pr = %d",*pr);
	
	*pr = 20;
	printf("\n value of pr = %d", x); 
	
	return 0;
}
