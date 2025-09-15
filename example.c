#include<stdio.h>

int main(){
	
	int x,y,z;
	printf("Enter x value:");
	scanf("%d",&x);
	printf("Enter y value:");
	scanf("%d",&y);
	printf("Enter z value:");
	scanf("%d",&z);

	

	printf("Locgical Operations Result: -");
	printf("AND result: %d \n", (x>5 && y<10 && z<4));  //AND
	printf("OR result: %d \n" , (x>6 || y<20 || z<6));  //OR
	printf("NOT result: %d \n" , !(x>5 && z<7));  //NOT
	 return 0;
	 
}
