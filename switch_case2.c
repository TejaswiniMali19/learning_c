#include<stdio.h> 

int main(){
	
	char op;
	int num1, num2;
	
	printf("Enter your 1st number :");
	scanf("%d",&num1);
	
	printf("Enter your 2nd number :");
	scanf("%d",&num2);
	

	printf("Enter Operation(+,-,*,/) :");
	scanf(" %c",&op);
	
	switch(op){
		
		case '+':printf("sum = %d", num1+num2);
		break; 
		case '-':printf("substaction = %d", num1-num2);
		break; 
		case '*':printf("Multiplication = %d", num1*num2);
		break;
		case '/':printf("Division = %d", num1/num2);
		break; 
		default:printf("Invalid Character") ;
	}
	
}
