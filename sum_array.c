//sum of array elements
#include<stdio.h>

int main(){
	
	int arr[]={47,67,12,34,12,10};
	int sum=0;
	int i;
	int length =sizeof(arr)/sizeof(arr[0]);
	

	for(i=0;i<length;i++){
		sum+=arr[i];
	}
	printf("Total array of sum = %d \n",&sum);
	
	return 0;
}
