//function with parameter or with return value
#include<stdio.h>

 int add(int a, int b){
 	return a+b;
 }
 int main(){
 	
 	int x= 6, y= 10;
 	int result =add(x,y);
 	printf("sum =%d" ,result);
 	
 	return 0;
 }

