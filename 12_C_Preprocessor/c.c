#include <stdio.h>
#include "interest.h"

#define AMOUNT(P) (P + (P * R * T) / 100.0)

int main() {
    printf("Amount of P = 1200 is %f\n", AMOUNT(1200));
    return 0;
}
