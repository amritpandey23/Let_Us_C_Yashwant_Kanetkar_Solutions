#include <stdio.h>

int main() {
    char x;
    scanf("%c", &x);
    if (x < 97 || x > 122) {
        if (!(x >= 65 && x <= 90) && !(x >= 48 && x <= 57)) {
            printf("Special symbol\n");
        }
    } else {
        printf("Lower case character.\n");
    }
    return 0;
}
