#include "transaction.h"
#include <stdio.h>

void initializeTransaction(struct Transaction *transaction, const struct Account *account, const char *type, double amount) {
    transaction->account = *account;
    snprintf(transaction->type, sizeof(transaction->type), "%s", type);
    transaction->amount = amount;
}

void executeTransaction(struct Transaction *transaction) {
    if (strcmp(transaction->type, "Deposit") == 0) {
        deposit(&transaction->account, transaction->amount);
    } else if (strcmp(transaction->type, "Withdrawal") == 0) {
        withdraw(&transaction->account, transaction->amount);
    }
}

void displayTransactionInfo(const struct Transaction *transaction) {
    printf("Transaction Type: %s\n", transaction->type);
    displayAccountInfo(&transaction->account);
    printf("Amount: $%.2f\n", transaction->amount);
}
