#include <stdio.h>
#include <limits.h>
#define MIN(a, b) (a < b ? a : b)
#define MAX(a, b) (a > b ? a : b)

int main() {
    int n, x, max, min;
    max = INT_MIN;
    min = INT_MAX;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &x);
        max = MAX(max, x);
        min = MIN(min, x);
    }
    printf("Range = %d\n", (max - min));
    return 0;
}
