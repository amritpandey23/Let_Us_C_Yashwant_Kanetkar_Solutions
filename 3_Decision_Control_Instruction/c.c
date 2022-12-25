#include <stdio.h>

int main() {
    int a, b, c;
    printf("enter all three angles : ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b + c == 180) {
        printf("Triangle is valid\n");
    } else {
        printf("Triangle is not valid\n");
    }
    return 0;
}
