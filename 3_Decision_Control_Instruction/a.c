#include <stdio.h>

int main() {
    int num, rev, _num;
    printf("Enter number : ");
    scanf("%d", &num);
    _num = num;
    rev = 0;
    while (num > 0) {
        rev *= 10;
        rev += (num % 10);
        num /= 10;
    }
    if (rev == _num) {
        printf("The number and it's reverse are equal\n");
    } else {
        printf("The number is not equal to it's reverse\n");
    }
    return 0;
}
