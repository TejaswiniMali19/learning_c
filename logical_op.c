#include<stdio.h>

int main(){
	
	int x, y;
	
	printf("Enter x value:");
	scanf("%d",&x);
	printf("Enter y value:");
	scanf("%d",&y);
	
	printf("Locgical Operations Result: -");
	printf("AND result: %d \n", (x>5 && y<10));  //AND
	printf("OR result: %d \n" , (x>6 || y<20));  //OR
	printf("NOT result: %d \n" , (x> y));  //NOT
	
	return 0;
}
