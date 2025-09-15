#include<stdio.h>

int main(){
	int coffee;
	printf("enter your coffee");
	scanf("%d",&coffee);
	
	if(coffee>10){
		printf("very hot");
	}
	else if(coffee>10 && coffee<30){
		printf("hot");
	}
		else if(coffee>30 && coffee<60){
		printf("modrate");
	}
		else if(coffee>60 && coffee<75){
		printf("cold");
    }
    else{
    	printf("very cold:");
	}
	return 0;

	
}
