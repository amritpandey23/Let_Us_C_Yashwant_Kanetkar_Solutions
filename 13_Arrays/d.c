#include <stdio.h>

void insertionSort(int[], int);

int main() {
    int arr[] = {4, 3};
    insertionSort(arr, 2);
    for (int i = 0; i < 2; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void insertionSort(int A[], int n) {
    int i, j, key;
    j = 0;
    for (j = 0; j < n; ++j) {
        key = A[j];
        i = j;
        while (i > 0) {
            if (A[i - 1] <= key) {
                break;
            }
            A[i] = A[i - 1];
            --i;
        }
        A[i] = key;
    }
}
