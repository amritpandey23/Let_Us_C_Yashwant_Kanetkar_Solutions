#include <stdio.h>
#define EOL 100

int main() {
    int neg, pos, zero, x;
    neg = pos = zero = 0;
    while (1) {
        scanf("%d", &x);
        if (x == EOL) {
            printf("Negative = %d, Positive = %d, Zeros = %d\n", neg, pos, zero);
            break;
        }
        (x < 0 ? neg++ : x == 0 ? zero++ : pos++);
    }
    return 0;
}
