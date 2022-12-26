#include <stdio.h>

void binaryWithoutRecursion(int);
void binaryWithRecursion(int);

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    binaryWithRecursion(n);
    printf("\n");
    binaryWithoutRecursion(n);
    return 0;
}

void binaryWithRecursion(int n) {
    if (n == 0) {
        return;
    }
    binaryWithRecursion(n / 2);
    printf("%d", n % 2);
}

void binaryWithoutRecursion(int n) {
    int i = 1;
    int x = 0;
    while (n > 0) {
        x += (n % 2) * i;
        i *= 10;
        n /= 2;
    }
    printf("%d\n", x);
}
