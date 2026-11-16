#include <stdio.h>

float celsius(float fahr) {
return (fahr - 32.0) * 5.0 / 9.0;
}

int main() {
float fahr;
printf("Digite a temperatura em Fahrenheit: ");
scanf("%f", &fahr);
    
printf("Celsius = %.2f\n", celsius(fahr));
    
return 0;
}