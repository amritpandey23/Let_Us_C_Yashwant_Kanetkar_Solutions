#include <stdio.h>

int main() {
    int w, h;
    float bmi;
    printf("Enter weight and height: ");
    scanf("%d %d", &w, &h);
    bmi = w / (h * h);
    printf("BMI = %d", &bmi);
    if (bmi >= 40) {
        printf("Morbidly Obese\n");
    } else if (bmi > 30) {
        printf("Obese\n");
    } else if (bmi > 25) {
        printf("Overweight\n");
    } else if (bmi > 18.6) {
        printf("Ideal\n");
    } else if (bmi > 17.6) {
        printf("Underweight\n");
    } else if (bmi > 15.1) {
        printf("Anorexic\n");
    } else {
        printf("Starvation\n");
    }
    return 0;
}
