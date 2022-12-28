#include <stdio.h>

int main() {
    char num;
    scanf("%c", &num);
    printf("3rd bit = %d\n", (num & (1 << 3)) > 0 ? 1 : 0);
    printf("6th bit = %d\n", (num & (1 << 6)) > 0 ? 1 : 0);
    printf("7th bit = %d\n", (num & (1 << 7)) > 0 ? 1 : 0);
    printf("\n");
    return 0;
}
