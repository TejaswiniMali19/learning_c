// pointer to pointer

#include<stdio.h>

int main(){
	
	int a = 10;  //normal variable
	int *p;    //pointer to int
	int **pp ;  //pointer to pointer
	
	
	p = &a;
	pp = &p;
	
	printf("\n Value of a = %d",a); //output =10
	
	printf("\n Address of a = %u",&a);//output :6487620
	
	printf("\n p stores = %u (Address of a)",p);//output:6487620
	
	printf("\n *p (value at p) =%d",*p); //output : 10
	
	printf("\n pp stores = %u (Address of p)",pp);
	
	printf("\n *pp (value at pp) = %u (Address of a)",*pp);//output:6487620
	
	printf("\n *pp(value at pp) =%u (Address of a)",**pp);
	
	
}
