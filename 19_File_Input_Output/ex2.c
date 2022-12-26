#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fs, *fc;
    char ch;
    fs = fopen("hello.txt", "r");
    if (fs == NULL) {
        puts("Cannot open hello.txt");
        exit(1);
    }
    fc = fopen("copy.txt", "w");
    if (fc == NULL) {
        puts("Cannot open copy.txt");
        fclose(fs);
        exit(1);
    }
    while (1) {
        ch = fgetc(fs);
        if (ch == EOF) {
            break;
        }
        fputc(ch, fc);
    }
    fclose(fs);
    fclose(fc);
}
