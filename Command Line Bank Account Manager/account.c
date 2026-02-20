#include "account.h"
#include <stdio.h>
#include <stdlib.h>

struct Account {
	int AccountNumber;
	double Balance;
};

Account* accountCreate(int account_number, double initial_deposit)
{
	Account* newAccount = (Account*)malloc(sizeof(Account));
	if (newAccount == NULL) {
		return NULL; // Allocation failed
	}
	newAccount->AccountNumber = account_number;
	newAccount->Balance = initial_deposit;
	return newAccount;
}

void accountDestroy(Account* account)
{
	if (account != NULL) {
		free(account);
	}
}

void accountDeposit(Account* account, double amount)
{
	if (account != NULL && amount > 0) {
		account->Balance += amount;
	}
}

int accountWithdraw(Account* account, double amount)
{
	if (account != NULL && amount > 0 && account->Balance >= amount) {
		account->Balance -= amount;
		return 1; // Success
	}
	return 0; // Failure
}

double accountGetBalance(Account* account)
{
	if (account != NULL) {
		return account->Balance;
	}
	return 0.0;
}