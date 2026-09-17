#include <stdio.h>

int main(){

int kmh;

printf("Digite a velocidade(Km/h): ");
scanf("%d", &kmh);

float ms = kmh / 3.6;

printf("\nA velocidade em M/s e: %.2f", ms);

return 0;

}