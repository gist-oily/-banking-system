#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "customer.h"

struct Account {
    struct Customer customer;
    int accountId;
    double balance;
};

void initializeAccount(struct Account *account, const struct Customer *customer, int accountId, double balance);
void deposit(struct Account *account, double amount);
void withdraw(struct Account *account, double amount);
void displayAccountInfo(const struct Account *account);

#endif // ACCOUNT_H
