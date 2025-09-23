#include<stdio.h>
#include<string.h>

void main(){
	
	char name1[20];
	char name2[20];
	printf("Enter the name1 ");
    gets(name1);
	
		printf("Name 1=%s \n", name1);
	printf("Name 2=%s \n", name2);
    strcpy(name1,name2);
}
