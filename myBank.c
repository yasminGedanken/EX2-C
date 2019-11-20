#include <stdio.h>
#include "myBank.h"


double superBank [50][2] = {{0}}; 

int openAccount(double firstDep)
{
int i ;
for (i=0;i<50;i++){
if (superBank[i][0]!=1.0)
{
superBank[i][0]=1.0;
superBank[i][1]=firstDep;
return i+901;
}
}
return 0;
}


double checkMoney(int accNumber)
{
	
	if(superBank[accNumber-901][0]==1){
	
	return superBank[accNumber-901][1];
	}
		else return -1.0;
}

double addMoney(int accNumber, double amount)
{
	if(superBank[accNumber-901][0]==1.0){
	double i;
	superBank[accNumber-901][1]+=amount;
	i=superBank[accNumber-901][1];
	return i;
	}
	return -1.0;
}
double takeMoney(int accNumber, double amount ){
	double i = superBank[accNumber-901][1];
	if (superBank[accNumber-901][0]==1.0){
		if(i>amount){
			i-=amount;
		return i;
		}
		else
			return -2.0;
		
	}
	return -1.0;
}

double tooPoorForOurBankBitch(int accNumber)
{
	if(superBank[accNumber-901][0]==1.0)
	{
		superBank[accNumber-901][0]=0;
		return 0;
	
	}
	else
		return -1.0;
}

void freeMoneyBitch(double interest_rate)
{
	int i;
	for(i=901; i<951;i++){
		if(superBank[i-901][0] == 1.0){
			superBank[i-901][1]+=((superBank[i-901][1]*interest_rate)/100);
		}	
}
}
	
void printAll()
{
	int i,j;
		for (i=0; i<50; i++){
			for(j=1;j<2;j++){

		if(superBank[i][0]==1.0){
			printf("account number: %d, the amount in the account is: %lf\n",i+901, superBank[i][1]);
		} 	
	}	
}
}
	
	void closeAll()
	{
		int i,j;
		for (i=0; i<50; i++){
			for(j=0;j<2;j++){
				superBank[i][j] = 0;
			}
		}
	}
				
			











