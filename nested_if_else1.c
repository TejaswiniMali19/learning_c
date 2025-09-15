#include<stdio.h>

int main(){
	int restaurant, food, payment ,order;
	printf("Your restaurant can be open ?(1 = yes, 0- No)");
	scanf("%d",&restaurant);
	
		if(restaurant==1){
		printf("what are ready to food ? (1 = yes, 0- No)");
		scanf("%d",&food);
		if(payment==1){
			printf("what your payment is pay? (1 = yes, 0- No) ");
			scanf("%d",&payment);
			if(payment==1){
				printf("payment is Succesfully");
			}
			else{
				printf("payment are Required");
			}
		}	
		else{
				printf("Food is  available");
			}
		}
		else{
			printf("close the restaurant");
		}
		return 0;
}
