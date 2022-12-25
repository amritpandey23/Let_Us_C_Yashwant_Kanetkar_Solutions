#include <stdio.h>

int main() {
    int l, b, p, a;
    printf("Enter length and breadth: ");
    scanf("%d %d\n", &l, &b);
    if (2 * (l + b) > l * b) {
        printf("Perimeter is greater than area.\n");
    } else if (2 * (l + b) < l * b) {
        printf("Area is greater than perimeter.\n");
    } else {
        printf("Area and perimeter are equal\n");
    }
    return 0;
}
