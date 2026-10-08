#include <stdio.h>

int main() {
    int c;
    printf("%10s %12s %10s\n", "Celsius", "Fahrenheit", "Kelvin");
    for (c = 0; c <= 100; c += 5) {
        float f = (9.0 * c) / 5 + 32;
        float k = c + 273.15;
        printf("%10.2f %12.2f %10.2f\n", (float)c, f, k);
    }
    return 0;
}