#include <stdio.h>

void solve(char[], int);

int main() {
    char card[16];
    scanf("%s", card);
    solve(card, 16);
    return 0;
}

void solve(char card[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            sum += (card[i] - 48);
        } else {
            int x = (card[i] - 48);
            x *= 2;
            if (x >= 10) {
                x -= 9;
            }
            sum += x;
        }
    }
    printf("num = %s\n", card);
    printf("Sum = %d\n", sum);
    if (sum % 10 == 0) {
        printf("Credit Card is valid\n");
    }
}
