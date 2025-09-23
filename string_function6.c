#include<stdio.h>
#include<string.h>

void main(){
	
	//string function are using cpy,cmp
	
	/*char password[20],input[20];
	strcpy(password,"admin123");
	
	printf("Enter password\n");
	scanf("%s",&input);
	
	if(strcmp(password,input)==0)
	printf("Access Granted");
	else
	printf("Access Denied");*/
	
	
	char name1[20]="Teju";
	char name2[20]="Mali";
	char str[20]="I am from Jalgaon\n";
	
	//strcat(name1,name2);
	strcat(name1,name2);
	strcat(name1,str);
	
	printf("concatenated String = %s",name1);
	
	
	
}
