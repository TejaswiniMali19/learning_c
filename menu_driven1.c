#include<stdio.h>

int main(){
	
	int choice, balance =1000, amount;
	char cont;
	
	do
	{
		printf("-----ATM Menu-----\n");
		printf("1. Check Balance \n");
		printf("2. Deposite Money \n");
		printf("3. Withdraw Money \n");
		printf("0. Exit\n");
		printf("-------------\n");
		
		printf("Enter Your Choice :");
		scanf("%d",&choice);
		
		switch(choice){
			case 1: printf("Your Balance is = %d \n",balance);
			break;
			case 2: printf("Enter Amount to Deposite \n:");
			        scanf("%d",&amount);
			        balance +=amount;
			        printf("Deposited Sucussefully ,New Balance is =%d \n",balance);
			        break;
			case 3: printf("Enter amount to be Withdraw \n :");
		         	scanf("%d",&amount);
					 if(amount<=balance){
					 	balance -= amount;
					 printf("withdraw Sucussefully, New Balance is = %d \n ", balance);
					 	
					 }else{
					 	printf("Insufficient Balance \n");
					 	break;
					 } 
     		 case 0: printf("Exiting Atm ....\n");
					 break;
					 
					 default:printf("Invalid Choice \n");    
					}
					if(choice !=0){
						printf("\n Do You want to continue (y/n)");
						scanf("%c",&cont);
						}else{
							cont= 'n';
						}
		
	}	while(cont=='y ' ||  cont=='y');

	return 0;
}
