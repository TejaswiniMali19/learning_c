#include<stdio.h>

int main(){
	
	int num1, num2;
	printf("Enter 1st number");
	scanf("%d",&num1);
	printf("Enter 2nd number");
	scanf("%d",&num2);
	
	printf("\n Relational Operations Result \n");
	printf("num1==num2 : %d \n",num1==num2);  //Equal to
	printf("num1!=num2 : %d \n",num1!=num2);  //not equal to
	printf("num1>num2 : %d \n",num1>num2);  //greater than
	printf("num1<num2 : %d \n",num1<num2);  //less than
	printf("num1>=num2 : %d \n",num1>=num2);  //greater than equal to
	printf("num1<=num2 : %d \n",num1<=num2);  //less than equal
	return 0;
	
}
