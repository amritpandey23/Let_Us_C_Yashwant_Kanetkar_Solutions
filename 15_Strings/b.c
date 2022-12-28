#include <stdio.h>

int isValid(char[], int);

int main() {
    char isbn[10];
    scanf("%s", isbn);
    printf(isValid(isbn, 10) ? "YES, it's valid.\n" : "NO, it's not valid\n");
    return 0;
}

int isValid(char isbn[], int n) {
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += (i + 1) * (isbn[i] - 48);
    }
    return (sum % 11) == (isbn[9] - 48);
}
