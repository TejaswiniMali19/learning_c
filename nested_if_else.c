#include<stdio.h>

int main(){
	int ticket, idproof,luggage;
	
	
	printf("Do You have a ticket ?(1 = yes, 0- No)");
	scanf("%d",&ticket);
	
	if(ticket==1){
		printf("Do You Have a Id proof ? (1 = yes, 0- No)");
		scanf("%d",&idproof);
		if(idproof==1){
			printf("Is Luggage within 20 kg ? (1 = yes, 0- No) ");
			scanf("%d",&luggage);
			if(luggage==1){
				printf("Check in Succesfully");
			}
			else{
				printf("Extra luggage charges apply");
			}
		}	
		else{
				printf("Id proof Required");
			}
		}
		else{
			printf("No ticket , No Entry");
		}
		return 0;
	}

