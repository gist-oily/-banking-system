#include "customer.h"
#include <stdio.h>

void initializeCustomer(struct Customer *customer, const char *name, int customerId) {
    snprintf(customer->name, sizeof(customer->name), "%s", name);
    customer->customerId = customerId;
}

void displayCustomerInfo(const struct Customer *customer) {
    printf("Customer ID: %d\nName: %s\n", customer->customerId, customer->name);
}
