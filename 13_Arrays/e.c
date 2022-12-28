#include <stdio.h>

void modify(int[], int);

int main() {
    int A[] = {1, 2, 3, 4};
    modify(A, 4);
    for (int i = 0; i < 4; ++i) {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}

void modify(int A[], int n) {
    for (int i = 0; i < n; ++i) {
        A[i] *= 3;
    }
}
