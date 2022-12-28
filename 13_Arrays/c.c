#include <stdio.h>
#include <limits.h>
#define MIN(a, b) (a < b ? a : b)

int main() {
    int arr[25];
    int small = INT_MAX;
    for (int i = 0; i < 25; ++i) {
        small = MIN(small, arr[i]);
    }
    printf("%d\n", small);
    return 0;
}
