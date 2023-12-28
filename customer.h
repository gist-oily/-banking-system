#ifndef CUSTOMER_H
#define CUSTOMER_H

struct Customer {
    char name[50];
    int customerId;
};

void initializeCustomer(struct Customer *customer, const char *name, int customerId);
void displayCustomerInfo(const struct Customer *customer);

#endif // CUSTOMER_H
