#include "account.h"
#include <stdio.h>

void initializeAccount(struct Account *account, const struct Customer *customer, int accountId, double balance) {
    account->customer = *customer;
    account->accountId = accountId;
    account->balance = balance;
}

void deposit(struct Account *account, double amount) {
    if (amount > 0) {
        account->balance += amount;
        printf("Deposit successful. New balance: $%.2f\n", account->balance);
    } else {
        printf("Invalid deposit amount.\n");
    }
}

void withdraw(struct Account *account, double amount) {
    if (amount > 0 && amount <= account->balance) {
        account->balance -= amount;
        printf("Withdrawal successful. New balance: $%.2f\n", account->balance);
    } else {
        printf("Invalid withdrawal amount or insufficient funds.\n");
    }
}

void displayAccountInfo(const struct Account *account) {
    printf("Account ID: %d\n", account->accountId);
    displayCustomerInfo(&account->customer);
    printf("Balance: $%.2f\n", account->balance);
}
