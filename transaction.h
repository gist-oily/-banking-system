#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "account.h"

struct Transaction {
    struct Account account;
    char type[20];
    double amount;
};

void initializeTransaction(struct Transaction *transaction, const struct Account *account, const char *type, double amount);
void executeTransaction(struct Transaction *transaction);
void displayTransactionInfo(const struct Transaction *transaction);

#endif // TRANSACTION_H
