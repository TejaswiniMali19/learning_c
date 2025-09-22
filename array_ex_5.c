//find maximum element
#include<stdio.h>

int main(){
	
	int number[5] ={13,9,45,34,45};
	int max = number[0];
	int i;
	
	for(i=1;i<5;i++){
		if(number[i]>max){
			max = number[i];
		}
	}
	printf("Maximum Number : = %d", max);
	
	return 0;
}
	
