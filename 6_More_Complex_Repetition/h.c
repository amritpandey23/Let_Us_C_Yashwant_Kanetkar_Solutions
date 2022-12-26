#include <stdio.h>

int main() {
    for (int h = 0; h < 24; ++h) {
        if (h >= 0 && h < 3) {
            printf("%d AM midnight\n", h);
        } else if (h >= 3 && h < 12) {
            printf("%d AM morning\n", h);
        } else if (h >= 12 && h < 15) {
            printf("%d PM noon\n", h);
        } else if (h >= 15 && h < 21) {
            printf("%d PM evening\n", h);
        } else {
            printf("%d PM midnight\n", h);
        }
    }
    return 0;
}
