#include <stdio.h>
#include <math.h>

int main() {
    int ang;
    float deg;

    printf("Enter value in degree: ");
    scanf("%d", &ang);
    deg = (180 / M_PI) * ang;
    (
        sin(deg) * sin(deg) + cos(deg) * cos(deg) == 1 ?
        printf("Yes\n") :
        printf("No\n")
    );
    return 0;
}
