#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num < 0) {
        printf("%d\n", -num);
    } else {
        printf("%d\n", num);
    }
}
