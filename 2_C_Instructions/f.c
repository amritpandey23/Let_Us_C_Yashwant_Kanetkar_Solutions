#include <stdio.h>

int main() {
    int c, d;
    scanf("%d %d", &c, &d);
    int temp = c;
    c = d;
    d = temp;
    printf("%d %d\n", &c, &d);
    return 0;
}
