#include <stdio.h>

int main() {
    int i, j, k, l;
    for (i = 1; i <= 50; ++i) {
        for (j = 1; j <= 50; ++j) {
            for (k = 1; k <= 50; ++k) {
                for (l = 1; k <= 50; ++k) {
                    if (
                        (i != j && i != k && i != l) &&
                        (j != k) && (j != l) &&
                        (k != l)
                    ) {
                        if (i * i * i + j * j * j == k * k * k + l * l * l) {
                            printf("%d %d %d %d\n", i, j, k, l);
                        }
                    }
                }
            }
        }
    }
    return 0;
}
