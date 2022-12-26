#include <stdio.h>

int main() {
    int y;
    printf("Enter year: ");
    scanf("%d", &y);
    (
        y % 400 == 0 || y % 4 == 0 ?
        printf("Leap year\n") :
        printf("Non-Leap year\n")
    );
    return 0;
}
