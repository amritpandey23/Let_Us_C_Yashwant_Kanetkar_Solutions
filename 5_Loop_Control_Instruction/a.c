#include <stdio.h>

int main() {
    char i;
    i = 0;
    while (i < 127) {
        printf("%c %d\n", (i - 1), (i - 1));
        ++i;
    }
    return 0;
}
