#include<stdio.h>

int welcome()
{
	printf("!..Welcome,To Canara Bank..!");
}

int balance(int a)
{
	printf("\nCurrent Balance:%d",a);
}

int interest()
{
	return 5;
}

int deposit(int b,int c)
{
	return b+c;
}

int main()
{
	int bal=10000,amount;
	welcome();
	balance(bal);
	printf("\nCurrent Interest Rate:%d",interest());
	printf("\nEnter amount to deposit:");
	scanf("%d",&amount);
	printf("\nAfter deposit, Current Balance:%d",deposit(bal,amount));
	return 0;
}
