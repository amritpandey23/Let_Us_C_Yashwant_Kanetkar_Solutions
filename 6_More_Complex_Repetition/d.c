#include <stdio.h>

int main() {
    int x;
    float ans;
    printf("Enter x: ");
    scanf("%d", &x);
    ans = 0;
    for (int i = 0; i < 7; ++i) {
        ans+=pow(-1/x, i + 1);
    }
    ans /= 2;
    printf("%d\n", ans);
    return 0;
}
