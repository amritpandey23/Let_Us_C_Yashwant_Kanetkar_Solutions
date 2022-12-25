#include <stdio.h>

int main() {
    int x, y, r, a, b;
    float dist;
    printf("Enter (x, y) and radius: ");
    scanf("%d %d %d", &x, &y, &r);
    printf("Enter coordinates (a, b): ");
    scanf("%d %d", &a, &b);
    dist = sqrt(pow(x - a, 2) + pow(y - b, 2));
    if (dist > r) {
        printf("point lies outside circle.\n");
    } else if (dist < r) {
        printf("point lies inside circle.\n");
    } else {
        printf("point lies on circumference.\n");
    }
    return 0;
}
