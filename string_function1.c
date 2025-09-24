#include<stdio.h>
#include<string.h>

void main()
{		
	char name[20];
	printf("enter your full name");
	printf("Length is %d",strlen(name));
//	scanf("%s",&name);
    gets(name);
    return 0;
}
