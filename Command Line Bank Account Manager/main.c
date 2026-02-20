#include <stdio.h>
#include "account.h"

int main() {
    Account* myAccount = accountCreate(1001, 50.0);
    int choice = 0;
    double amount = 0;

    printf("--- Welcome to the Bank ---\n");

    while (choice != 4) {
        printf("\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Choose an option: ");

        if (scanf_s("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            break;
        }

        switch (choice) {
        case 1:
            printf("Current Balance: $%.2f\n", accountGetBalance(myAccount));
            break;
        case 2:
            printf("Enter amount to deposit: ");
            scanf_s("%lf", &amount);
            accountDeposit(myAccount, amount);
            break;
        case 3:
            printf("Enter amount to withdraw: ");
            scanf_s("%lf", &amount);
            if (accountWithdraw(myAccount, amount)) {
                printf("Withdrawal successful.\n");
            } else {
                printf("Withdrawal failed. Insufficient funds.\n");
            }
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid option. Try again.\n");
        }
    }

    accountDestroy(myAccount);

    return 0;
}