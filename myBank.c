#include <stdio.h>
#include "myBank.h"
#define MAX 950
#define MIN 901
#define HIGHACC 50


double superBank [HIGHACC][2] = {{0}}; 

int openAccount(double firstDep)
{
int i ;
for (i=0;i<HIGHACC;i++){
if (superBank[i][0]!=1.0)
{
superBank[i][0]=1.0;
superBank[i][1]=firstDep;
return i+MIN;
}
}
return 0;
}


double checkMoney(int accNumber)
{
	
	if(superBank[accNumber-MIN][0]==1){
	
	return superBank[accNumber-MIN][1];
	}
		else return -1.0;
}

double addMoney(int accNumber, double amount)
{
	if(superBank[accNumber-MIN][0]==1.0){
	double i;
	superBank[accNumber-MIN][1]+=amount;
	i=superBank[accNumber-MIN][1];
	return i;
	}
	return -1.0;
}
double takeMoney(int accNumber, double amount ){
	double i = superBank[accNumber-MIN][1];
	if (superBank[accNumber-MIN][0]==1.0){
		if(i>amount){
			i-=amount;
		return i;
		}
		else
			return -2.0;
		
	}
	return -1.0;
}

double tooPoorForOurBank(int accNumber)
{
	if(superBank[accNumber-MIN][0]==1.0)
	{
		superBank[accNumber-MIN][0]=0;
		return 0;
	
	}
	else
		return -1.0;
}

void freeMoney(double interest_rate)
{
	int i;
	for(i=MIN; i<951;i++){
		if(superBank[i-MIN][0] == 1.0){
			superBank[i-MIN][1]+=((superBank[i-MIN][1]*interest_rate)/100);
		}	
}
}
	
void printAll()
{
	int i,j;
		for (i=0; i<HIGHACC; i++){
			for(j=1;j<2;j++){

		if(superBank[i][0]==1.0){
			printf("account number: %d, the amount in the account is: %.2lf\n",i+MIN, superBank[i][1]);
		} 	
	}	
}
}
	
	void closeAll()
	{
		int i,j;
		for (i=0; i<HIGHACC; i++){
			for(j=0;j<2;j++){
				superBank[i][j] = 0;
			}
		}
	}