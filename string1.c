#include<stdio.h>

void main(){
	
	char name[20];
	printf("Enter your Full Name");
//	scanf("%s",&name);
    gets(name);
	printf("My Name is : %s",name);
}
