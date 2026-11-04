#include <stdio.h>

int main() {
    int c;
    printf("DEC\tHEX\tCHAR\n");
    for (c = 32; c <= 126; c++)
        printf("%d\t%X\t%c\n", c, c, c);
    return 0;
}