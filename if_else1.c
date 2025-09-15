#include<stdio.h>

int main(){
	int amount;
	printf("enter your Shopping Amount");
	scanf("%d",&amount);
	
	if(amount>499){
		printf("congrats , you get Free Dillevery");
	}
	else{
		printf("Dilvery Charges will apply");
	}
	return 0;
}
