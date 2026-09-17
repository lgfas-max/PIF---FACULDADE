#include <stdio.h>

int main() {
float celsius;
    
printf("Digite a temperatura em Celsius: ");
scanf("%f", &celsius);

float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
float kelvin = celsius + 273.15;

printf("Fahrenheit: %.2f F\n", fahrenheit);
printf("Kelvin: %.2f K\n", kelvin);
    
return 0;
}