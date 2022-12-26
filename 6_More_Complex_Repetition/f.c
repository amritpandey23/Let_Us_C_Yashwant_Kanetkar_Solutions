#include <stdio.h>

int main() {
    float curr = 100000;
    for (int i = 10; i > 0; --i) {
        printf("Year %d : %f\n", i, curr / 1.1);
        curr /= 1.1;
    }
    return 0;
}
