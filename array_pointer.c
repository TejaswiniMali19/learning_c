#include<stdio.h>

int main(){
	
	int arr[5] = {10,20,30,40,50};
	
	int *p;
	 
	p = arr;
	
	printf("\n First Element + %d", *p); //arr[0];  
	
	printf("\n 2nd Element + %d", *(p+1)); //arr[1];  
	
	printf("\n 3rd Element + %d", *(p+2)); //arr[2];  
	
	printf("\n 4 th Element + %d", *(p+3)); //arr[3]; 
	
	printf("\n 5th Element + %d", *(p+4)); //arr[4];   

}
