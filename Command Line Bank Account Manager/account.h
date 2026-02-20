#pragma once


typedef struct Account Account;

Account* accountCreate(int account_number, double initial_deposit);
void accountDestroy(Account* account);

void accountDeposit(Account* account, double amount);
int accountWithdraw(Account* account, double amount); // This will return 1 if successful, 0 if failed
double accountGetBalance(Account* account);