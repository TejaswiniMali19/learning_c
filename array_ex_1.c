#include<stdio.h>

int main(){
	int marks[5]={45,13,54,14,67} ;//single dimensional array
	int i;
	
	printf("Array List");
	for(i-0;i<5;i++){
		printf("\n %d ", marks [i]);
	}
	marks[1] = 55;
	marks[3]=57;
	
	printf("updated Array List");
	for(i=0;i<5;i++){
		printf("\n %d ",marks[i]);
	}
		
	return 0;
}
