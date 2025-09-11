#include<stdio.h>
 
 int main(){
 	
 	int appleQty,oilQty,milkQty;
 	int appleprice,oilprice,milkprice;
 	int total;
 	int paid;
 	
 	appleprice = 50;
 	oilprice = 25;
 	milkprice = 30;
 	
 	
 	printf("Enter Quantity of apple (kg)");
 	scanf("%d",&appleQty);
 	
 	printf("Enter Quantity of oil (ltr)");
 	scanf("%d",&oilQty);
 	
 	printf("Enter Quantity of milk (leter)");
 	scanf("%d",&milkQty);
 	
 	total = (appleQty * appleprice) + (oilQty * oilprice) + (milkQty * milkprice);
 	printf("Total bill ammount : %d \n",total);
 	
 	print("enter amount paid by customer ?");
 	scanf("%d",&paid);
 	
 	printf("change the return = %d \n" ,paid-total);
 	
 	
 	
 	
 	return 0;
 	
 	
 	
 
 	
 }
