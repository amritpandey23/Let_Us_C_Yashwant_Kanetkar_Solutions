#include <stdio.h>

int main() {
    int p, r, n, q;
    float a;
    for (int i = 0; i < 10; ++i) {
        printf("Enter p, r, n, q: ");
        scanf("%d %d %d %d", &p, &r, &n, &q);
        a = p * pow(1 + r / q, n * q);
        printf("a = %f\n", a);
    }
    return 0;
}
