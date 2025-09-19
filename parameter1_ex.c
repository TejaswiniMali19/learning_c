//function with parameter but no return

#include<stdio.h>
void printsum(int a, int b){
	printf("sum=%d\n",a + b);
}
void printsub(int a, int b){
	printf("sub=%d\n",a - b);
}

void printmult(int a, int b){
	printf("mult=%d\n",a * b);
}

void printdiv(int a, int b){
	printf("div=%d\n",a / b);
}
int main(){
	printsum(45,7);
	printsum(78,2);
	printsub(78,2);
	printmult(78,2);
	printdiv(78,2);
	
	return 0;
}

