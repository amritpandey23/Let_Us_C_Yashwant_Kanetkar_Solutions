#include <stdio.h>

int main() {
    int x, y;
    printf("Enter (x, y): ");
    scanf("%d %d", &x, &y);
    if (x == 0 && y == 0) {
        printf("point lies on origin\n");
    } else if (x == 0) {
        printf("point lies on y-axis\n");
    } else if (y == 0) {
        printf("point lies on x-axis\n");
    } else {
        printf("none\n");
    }
    return 0;
}
