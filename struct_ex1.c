#include<stdio.h>

struct Employee{
	int id;
	char name[20];
	char desgination[20];
	int salary;
	
};

int main(){
	struct Employee emp;
	printf("Enter Emp id");
	scanf("%d",&emp.id);
	printf("Enter Emp name");
	scanf("%s",emp.name);
	printf("Enter Emp Desgination");
	scanf("%s",emp.desgination);
	printf("Enter Emp salary");
	scanf("%d",&emp.salary);
	
	
	printf("Details Of Employee \n");
	printf("Employee id = %d \n",emp.id);
	printf("Employee name = %s \n",emp.name);
	printf("Employee desgination = %s \n",emp.desgination);
	printf("Employee salary = %d \n",emp.salary);
	
	return 0;
	
	
}
