#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 500) {
        int sum, num;
        num = i;
        sum = 0;
        while (num > 0) {
            sum += (num % 10) * (num % 10) * (num % 10);
            num /= 10;
        }
        if (i == sum) {
            printf("%d\n", i);
        }
        ++i;
    }
    return 0;
}
