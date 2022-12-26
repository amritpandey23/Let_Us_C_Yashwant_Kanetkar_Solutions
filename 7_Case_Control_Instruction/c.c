#include <stdio.h>

int main() {
    int class, fail, grace;
    printf("Enter class and number of failed subjects:");
    scanf("%d %d", &class, &fail);
    switch (class) {
        case 1:
            grace = fail > 3 ? 0 : 5 * fail;
            break;
        case 2:
            grace = fail > 2 ? 0 : 4 * fail;
            break;
        case 3:
            grace = fail > 2 ? 0 : 5;
            break;
        default:
            printf("Unrecognized class");
    }
    printf("Grace marks = %d\n", grace);
    return 0;
}
