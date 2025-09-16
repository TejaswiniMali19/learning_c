#include<stdio.h>

int main(){
	
	int battery =100; //initialization
	
	while(battery>0)
	{
		printf("Batttery : %d \n",battery);
		battery-=10;
	}
	printf("Battery Empty");
}
