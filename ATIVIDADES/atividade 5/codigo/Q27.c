#include <stdio.h>

float celsiusParaFahrenheit(float c) { return (c * 9.0 / 5.0) + 32.0; }
float celsiusParaKelvin(float c) { return c + 273.15; }
float fahrenheitParaCelsius(float f) { return (f - 32.0) * 5.0 / 9.0; }
float kelvinParaCelsius(float k) { return k - 273.15; }

int main() {
    int op;
    float temp;
    
    printf("--- Conversor de Temperaturas ---\n");
    printf("1: Celsius para Fahrenheit\n");
    printf("2: Celsius para Kelvin\n");
    printf("3: Fahrenheit para Celsius\n");
    printf("4: Kelvin para Celsius\n");
    printf("Escolha a conversao: ");
    scanf("%d", &op);
    
    printf("Digite o valor da temperatura: ");
    scanf("%f", &temp);
    
    switch (op) {
        case 1: 
            printf("Resultado: %.2f Fahrenheit\n", celsiusParaFahrenheit(temp)); 
            break;
        case 2: 
            printf("Resultado: %.2f Kelvin\n", celsiusParaKelvin(temp)); 
            break;
        case 3: 
            printf("Resultado: %.2f Celsius\n", fahrenheitParaCelsius(temp)); 
            break;
        case 4: 
            printf("Resultado: %.2f Celsius\n", kelvinParaCelsius(temp)); 
            break;
        default: 
            printf("Opcao invalida!\n");
    }
    
    return 0;
}