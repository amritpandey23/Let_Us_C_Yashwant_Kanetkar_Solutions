#include <stdio.h>

int main() {
    int a, b, ctr, temp;
    a = 1189;
    b = 841;
    ctr = 0;
    while (ctr++ <= 8) {
        printf("A%d = %d mm x %d mm\n", (ctr - 1), a, b);
        temp = b;
        b = a / 2;
        a = temp;
    }
    return 0;
}
