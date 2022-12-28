#include <stdio.h>
#define N 100

int main() {
    int arr[N];
    int i = 0;
    for (i = 0; i < N / 2; ++i) {
        if (arr[i] != arr[N - i]) {
            printf("No\n");
            break;
        }
    }
    if (i == N/2) {
        printf("Yes\n");
    }
    return 0;
}
