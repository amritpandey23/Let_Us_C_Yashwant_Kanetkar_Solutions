#include <stdio.h>

int main() {
    int num, v, i;
    printf("Enter number: ");
    scanf("%d", &num);
    v = 0;
    i = 1;
    while (num > 0) {
        v += i * (num % 8);
        i *= 10;
        num /= 8;
    }
    printf("%d\n", v);
    return 0;
}
