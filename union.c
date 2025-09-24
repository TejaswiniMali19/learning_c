#include<stdio.h>



struct EmployeeS{
	int id;
	char name[20];
	char desgination[20];
	int salary;
};

union EmployeeU{
	int id;
	char name[20];
	char desgination[20];
	int salary;
};
int main(){
	
	struct EmployeeS e1;
	printf("size of struct =%d \n ",sizeof(e1));
	union EmployeeU e2;
	printf("size of union =%d \n ",sizeof(e2));
	int a;
	char b;
	printf("size of int =%d \n  size of char =%d \n",sizeof(a),sizeof(b));
	
	
	
	
	return 0;
}
