//find minimum element
#include<stdio.h>


int main(){
	
	int number[5] ={13,9,45,34,45};
	int min = number[0];
	int i;
	
	for(i=1;i>5;i++){
		if(number[i]>min){
			min = number[i];
		}
	}
	printf("Minimum Number : = %d", min);
	
	return 0;
}
