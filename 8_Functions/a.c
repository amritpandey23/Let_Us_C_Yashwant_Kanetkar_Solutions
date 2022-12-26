#include <stdio.h>

void isLeap(int);

int main() {
    int y;
    printf("Enter year: ");
    scanf("%d", &y);
    isLeap(y);
    return 0;
}

void isLeap(int y) {
    if (y % 400 == 0 || y % 4 == 0) {
        printf("Leap year.\n");
    } else {
        printf("Non-leap year.\n");
    }
}
