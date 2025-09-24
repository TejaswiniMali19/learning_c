// Student information more 
#include<stdio.h>

struct Student{
	int Rollno;
	char name[20];
	float marks;

};
int main(){
	
	int n;
	int i;
	printf("Enter number of Student ");
	scanf("%d",&n);
	
	struct Student std[n];
	
	for(i=0;i<n;i++){
		printf("Enter Details for student %d : \n",i+1);
		printf("Roll no : \n");
		scanf("%d",&std[i].Rollno);
		printf("Name : \n");
		scanf("%s",&std[i].name);
		printf("Marks : \n");
		scanf("%f",&std[i].marks);
		
	}
	printf("Student Records");
	for(i=0;i<n;i++){
		printf("Roll No : %d | Name : %s | Marks : %f \n",std[i].Rollno,std[i].name,std[i].marks);
		
	}
	
	
	return 0;
}
