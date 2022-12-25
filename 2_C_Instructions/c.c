#include <stdio.h>
#include <math.h>

int main() {
    float l1, l2, g1, g2, D;
    printf("Enter L1, L2, G1, G2: ");
    scanf("%f %f %f %f", &l1, &l2, &g1, &g2);
    D = 3963 * cosh(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2 - g1));
    printf("Distance in nautical miles = %f\n", D);
    return 0;
}
