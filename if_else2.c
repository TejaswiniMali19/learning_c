#include<stdio.h>

int main(){
	int age;
	printf("Enter Your age :");
	scanf("%d",&age);
	
	if(age<5){
		printf("Ticket Free - Enjoy");
	}
	else if(age>5 && age<10){
		printf("Half Ticket");
	}
		else if(age>12 && age<60){
		printf("Full Ticket");
	}
		else if(age>60 && age<75){
		printf("Senior Citizon - Half");
    }
    else{
    	printf("No Ticket :");
	}
	return 0;	
}
