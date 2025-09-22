#include<stdio.h>

int main(){
	int marks[5];
	int i;
	
	printf("Enter your marks");
	for(i=0;i<5;i++){
		scanf("\n %d ", &marks [i]);
	}
	
	printf("updated Array Marks");
	for(i=0;i<5;i++){
		printf("\n marks[%d]= %d \n ",i,marks[i]);
	}
}
