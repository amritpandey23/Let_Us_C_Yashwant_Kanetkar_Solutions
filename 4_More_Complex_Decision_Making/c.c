#include <stdio.h>
#define bool int

int main() {
    int h, t;
    float c;
    printf("Enter hardness, carbon content and tensile strength: ");
    scanf("%d %f %d", &h, &c, &t);
    bool c1, c2, c3;
    c1 = h > 50;
    c2 = c < 0.7;
    c3 = t > 5600;
    // printf("%d %d %d\n", c1, c2, c3);
    if (c1 && c2 && c3) {
        printf("Grade 10\n");
    } else if (c1 && c2) {
        printf("Grade 9\n");
    } else if (c2 && c3) {
        printf("Grade 8\n");
    } else if (c3 && c1) {
        printf("Grade 7\n");
    } else if (c1 || c2 || c3) {
        printf("Grade 6\n");
    } else {
        printf("Grade 5\n");
    }
    return 0;
}
