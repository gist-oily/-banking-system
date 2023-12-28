#include "customer.h"
#include "account.h"
#include "transaction.h"

int main() {
    // Create a customer
    struct Customer customer;
    initializeCustomer(&customer, "Alice", 1);

    // Create an account for the customer
    struct Account account;
    initializeAccount(&account, &customer, 101, 1000.0);

    // Perform transactions
    struct Transaction depositTransaction;
    initializeTransaction(&depositTransaction, &account, "Deposit", 500.0);
    executeTransaction(&depositTransaction);

    struct Transaction withdrawalTransaction;
    initializeTransaction(&withdrawalTransaction, &account, "Withdrawal", 200.0);
    executeTransaction(&withdrawalTransaction);

    // Display account information
    printf("\nAccount Information:\n");
    displayAccountInfo(&account);

    // Display transaction information
    printf("\nTransaction Information:\n");
    displayTransactionInfo(&depositTransaction);
    displayTransactionInfo(&withdrawalTransaction);

    return 0;
}
