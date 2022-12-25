#include <stdio.h>

int main() {
    float fah, cel;
    printf("Enter fahrenite: ");
    scanf("%f", &fah);
    cel = fah - 32;
    cel *= 5;
    cel /= 9;
    printf("The value in Celcius = %f\n", cel);
    return 0;
}