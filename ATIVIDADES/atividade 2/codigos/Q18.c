#include <stdio.h>

float PI = 3.141593;

int main(){
float raio;
printf("Digite o raio da esfera: ");
scanf("%f", &raio);

float area = 4.0 * PI * raio * raio;

float volume = (4.0 / 3.0) * PI * raio * raio * raio;

printf("Area da superficie: %.2f\n", area);
printf("Volume: %.2f\n", volume);

return 0;
}