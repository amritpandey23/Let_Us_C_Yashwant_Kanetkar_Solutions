#include <stdio.h>

typedef struct {
    int accNum;
    char *name;
    int bal;
} Customer;

void printCustomer(Customer);
void action(Customer*, int, int);
void print1(Customer[], int);

int main() {
    Customer customers[100];
    Customer c;
    c.accNum = 1234;
    c.name = "Amrit";
    c.bal = 12;
    action(&c, 0, 12);
    action(&c, 1, 100);
    printCustomer(c);
    return 0;
}

void printCustomer(Customer c) {
    printf("%d %s %d", c.accNum, c.name, c.bal);
}

void action(Customer *c, int op, int val) {
    if (op == 1) {
        c->bal += val;
    } else {
        if (c->bal - val < 100) {
            printf("The balance is insufficient for the specified withdrawal.\n");
        } else {
            c->bal -= val;
        }
    }
}

void print1(Customer cust[], int n) {
    for (int i = 0; i < n; ++i) {
        if (cust[i].bal < 100) {
            printCustomer(cust[i]);
        }
    }
}
