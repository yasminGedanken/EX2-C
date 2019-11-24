
int openAccount(double firstDep);
int checkIfOpen(int account_number);
double checkMoney(int accNumber);
double addMoney(int accNumber, double amount);
double takeMoney(int accNumber, double amount);
double tooPoorForOurBank(int accNumber);
void freeMoney(double interest_rate);
void printAll();
void closeAll();