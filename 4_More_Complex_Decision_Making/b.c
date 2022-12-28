#include <stdio.h>
#define MAX(a, b) (a > b ? a : b)

int main() {
    float r, g, b, c, m, y, k;
    r = 100;
    g = 0;
    b = 189;
    k = 1 - MAX(MAX(r / 255.0, g / 255.0), b / 255.0);
    c = (1 - (r / 255) - k) / (1 - k);
    m = (1 - (g / 255) - k) / (1 - k);
    y = (1 - (b / 255) - k) / (1 - k);
    printf("CMYK = %f %f %f %f", c, m, y, k);
    return 0;
}
