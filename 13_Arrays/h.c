#include <stdio.h>
#include <math.h>

float calc(float[], float[], int);
float mean(float[], int);

int main() {
    float x[] = {
        34.22, 39.8, 41.85, 43,23, 40.06, 53.29, 54.14, 49.12, 40.71, 55.15
    };
    float y[] = {
        102.43, 100.93, 97.43, 97.81, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65
    };
    printf("R = %f\n", calc(x, y, 11));
    return 0;
}

float calc(float x[], float y[], int n) {
    float M_X = mean(x, n);
    float M_Y = mean(y, n);
    float num, den_1, den_2, den;
    num = den_1 = den_2 = 0;
    for (int i = 0; i < n; ++i) {
        num += (x[i] - M_X) * (y[i] - M_Y);
        den_1 = pow(x[i] - M_X, 2);
        den_2 = pow(y[i] - M_Y, 2);
    }
    den = sqrt(den_1 * den_2);
    return num / den;
}

float mean(float A[], int n) {
    float M = 0;
    for (int i = 0; i < n; ++i) {
        M += A[i];
    }
    return M / n;
}
