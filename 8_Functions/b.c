#include <stdio.h>

void genPrimeFactors(int);

int main() {
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    genPrimeFactors(x);
    return 0;
}

void genPrimeFactors(int x) {
    int _n = x;

    while (x % 2 == 0) {
        printf("2 ");
        x /= 2;
    }

    while (x % 3 == 0) {
        printf("3 ");
        x /= 3;
    }

    for (int i = 5; i <= _n; i += 6) {
        while (x % i == 0) {
            printf ("%d ", i);
            x /= i;
        }
        while (x % (i + 2) == 0) {
            printf("%d ", i + 2);
            x /= (i + 2);
        }
    }
}
