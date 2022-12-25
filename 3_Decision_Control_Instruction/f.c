#include <stdio.h>

int main() {
    int x1, x2, x3, y1, y2, y3;
    float m1, m2;
    printf("Enter x1, x2, x3, y1, y2, y3: ");
    scanf("%d %d %d %d %d %d", &x1, &x2, &x3, &y1, &y2, &y3);
    m1 = (x1 - x2) / (y1 - y2);
    m2 = (x2 - x3) / (y2 - y3);
    if (m1 == m2) {
        printf("All the three lies on same line.\n");
    } else {
        printf("Does not lie on same line.\n");
    }
}
