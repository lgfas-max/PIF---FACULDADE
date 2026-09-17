#include <stdio.h>

int main() {
float comprimento, largura, preco_metro;
    
printf("Digite o comprimento e a largura do terreno (m): ");
scanf("%f %f", &comprimento, &largura);

printf("\nDigite o preco do metro de arame: R$ ");
scanf("%f", &preco_metro);

float perimetro = 2.0 * (comprimento + largura);
float metragem_total = perimetro * 3;
float custo_total = metragem_total * preco_metro;

printf("\nMetros de arame a comprar: %.2f m\n", metragem_total);
printf("Custo total: R$ %.2f\n", custo_total);
    
return 0;
}