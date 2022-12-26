#include <stdio.h>

int main() {
    for (int a = 1; a <= 30; ++a) {
        for (int b = 1; b <= 30; ++b) {
            for (int c = 1; b <= 30; ++c) {
                if (
                    (a * a + b * b == c * c) ||
                    (b * b + c * c == a * a) ||
                    (c * c + a * a == b * b)
                ) {
                    printf("%d %d %d\n", a, b, c);
                }
            }
        }
    }
    return 0;
}
