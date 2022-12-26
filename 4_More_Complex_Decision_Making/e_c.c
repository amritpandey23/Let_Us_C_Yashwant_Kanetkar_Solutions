#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    (
        a > b && a > c ?
        printf("%d is greatest\n", a) :
        (
            b > c && b > a ?
            printf("%d is greatest\n", b) :
            printf("%d is greatest\n", c)
        )
    );
    return 0;
}
