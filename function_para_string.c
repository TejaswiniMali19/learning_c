//function parameterizes of string
#include<stdio.h>
#include<string.h>

void main(){
	 
	 char str[50];
	 printf("Enter String");
	// gets(str);   //unsafe
	fgets(str,sizeof(str),stdin);//safe
	 displayString(str);    //function call
	 
	 
}
void displayString(char str[]){
	printf ("Enter String ");
	puts(str);
}
