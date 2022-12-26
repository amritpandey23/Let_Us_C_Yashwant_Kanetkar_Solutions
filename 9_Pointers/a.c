#include <stdio.h>

void shift(int *, int *, int *);

int main() {
    int x, y, z;
    printf("Enter x, y, z: ");
    scanf("%d %d %d", &x, &y, &z);
    shift(&x, &y, &z);
    printf("x = %d y = %d z = %d\n", x, y, z);
    return 0;
}

void shift(int *a, int *b, int *c) {
    int tmp = *c;
    *c = *b;
    *b = *a;
    *a = tmp;
}
