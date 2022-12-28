#include <stdio.h>

int isSymmetric(int[][], int);

int main() {
    int mat[][3] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 9}
    };
    printf(isSymmetric(mat[3], 3) ? "YES\n" : "NO\n");
    return 0;
}

int isSymmetric(int mat[3][], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < (n - i); ++j) {
            if (mat[i][j] != mat[j][i]) {
                return 0;
            }
        }
    }
    return 1;
}
