#include <stdio.h>

int main() {
    int ctr = 1;
    int space = 8;
    for (int row = 1; row <= 4; ++row) {
        for (int j = 0; j < space; ++j) {
            printf(" ");
        }
        for (int i = 0; i < row; ++i) {
            printf("%d", ctr);
            for (int j = 0; j < 3; ++j) {
                printf(" ");
            }
            ctr++;
        }
        printf("\n");
        space -= 2;
    }
    return 0;
}
