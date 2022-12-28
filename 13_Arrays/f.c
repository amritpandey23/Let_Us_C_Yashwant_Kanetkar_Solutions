#include <stdio.h>
#include <math.h>

float mean(int[], int);
float sd(int[], int);

int main() {
    int vals[] = {
        -6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2
    };
    printf("Mean = %f\n", mean(vals, 15));
    printf("SD = %f\n", sd(vals, 15));
    return 0;
}

float mean(int A[], int n) {
    float Mean = 0;
    for (int i = 0; i < n; ++i) {
        Mean += A[i];
    }
    return (Mean / n);
}

float sd(int A[], int n) {
    float M = mean(A, n);
    float SD = 0;
    for (int i = 0; i < n; ++i) {
        SD += pow(A[i] - M, 2);
    }
    SD /= n;
    return sqrt(SD);
}
