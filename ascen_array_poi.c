//Acending order of using pointer of array
#include<stdio.h>

int main(){
	
	int arr[5] = {37,76,54,12,42};
	int i,j;
	int temp;
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(arr[i]>arr[j]){
					temp = arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
			}
		}
			
	}
		printf("\n sorted array");
		for(i=0;i<5;i++){
			printf("%d \n",arr[i]);
		}
	

		
	
	
return 0;
}
