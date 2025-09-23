//user to use string compare
#include<stdio.h>
#include<string.h>

void main(){
	char s1[10] ="Nilesh";
	char s2[20] ="NilesH";
	
	printf("Enter Your Name");
	gets(s1);
	gets(s2);
	
	if(strcmp(s1,s2)==0)
	printf("String are Equal");
	else
	printf("string are not Equal");
	
}
