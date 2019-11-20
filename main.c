#include <stdio.h>
#include "myBank.h"


int main(){
	char operator;
	double y,z;
	int x;
	printf("enter a char bitch \n");
	scanf(" %c", &operator);

	while (operator!='E')
	{	
	
	switch(operator)
	{
		case 'O':
		
		printf("how much money would you like to deposit in your account today , your majesty?\n");
		scanf("%d", &x);
		x = openAccount(x);
		printf("your account number is : %d\n", x);
			
		break;
	
		case 'B':
		
		printf("what is your account number?\n");
		scanf("%d", &x);
		y = checkMoney(x);
		if(y!=-1.0){
		printf("your account has %lf pounds\n", y);
		}
		else 
			printf("there is not an account with this number in our bank! you are a liar bitch!\n");
		break;
		
		case 'D':
		
		printf("what is your account number?\n");
		scanf("%d",&x);
		printf("how much money would you like to deposit?\n");
		scanf("%lf",&y);
		z = addMoney(x, y);
		if(z!=-1.0){
			printf("the amount in your account is: %lf\n",z);
		}
		else{
			printf("there is not an account with this number in our bank! you are a liar bitch!\n");
		}
		break;
		
		case 'W':
		
		printf("what is your account number?\n");
		scanf("%d",&x);
		printf("how much money would you like to withdrawal?\n");
		scanf("%lf",&y);
		z = takeMoney(x,y);
	if(z==-1.0){
		printf("there is not an account with this number in our bank! you are a liar bitch!\n");
	}
	else 
		if(z==-2.0){
			printf("you are poor loser bitch, go get a job\n");
		}
	else{
		printf("the amount left is: %lf pounds\n",z);
	}
	break;
	
		case 'C':
	
	printf("what is your account number?\n");
	scanf("%d",&x);
	y = tooPoorForOurBankBitch(x);
	if (y==-1.0){
		printf("the account you want to close is already closed\n");
			   }
			   break;
			   
		case 'I':
			  
			   printf("what is your interest rate?\n");
			   scanf("%lf", &y);
			   freeMoneyBitch(y);
			   break;
			   
		case 'P':
			   printAll();
			   break;
			   	   
			   
	}
		printf("enter a char bitch \n");
	scanf(" %c", &operator);
	}
	closeAll();
}
