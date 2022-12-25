#include <stdio.h>

int main() {
    int r, s, a;
    printf("Enter ages of Ram, Shayam and Ajay: ");
    scanf("%d %d %d", &r, &s, &a);
    if (r < s) {
        if (r < a) {
            printf("Ram is youngest\n");
        } else {
            printf("Ajay is youngest\n");
        }
    } else {
        if (s < a) {
            printf("Shyam is youngest\n");
        } else {
            printf("Ajay is youngest\n");
        }
    }
    return 0;
}
