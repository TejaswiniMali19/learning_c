// A pointer is variable that holds the address of the variable

#include<stdio.h>

int main(){
	int x = 10, y, z;       //10 is addresss
	printf("\n Address of x = %u ",&x);    //address are find out to check are using %u and %t
	printf("\n Address of y = %u",&y);
    printf("\n Address of z = %u",&z);
    
    printf("\n value of x = %d",*(&x));
	return 0;	
}
	

