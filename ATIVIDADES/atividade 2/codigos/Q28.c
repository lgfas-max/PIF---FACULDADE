#include <stdio.h>

int main() {
int horas, horas_extras;
    
printf("Digite o total de horas normais e horas extras no ano: ");
scanf("%d %d", &horas, &horas_extras);

float salario_bruto = (horas * 10.0) + (horas_extras * 15.0);

// Operador ternario calcula 10% de imposto apenas sobre o valor que exceder
float excedente = salario_bruto - 12000.0;
float imposto = (salario_bruto > 12000.0) ? (excedente * 0.10) : 0.0;

printf("Salario Anual Bruto: R$ %.2f\n", salario_bruto);
printf("Imposto a Pagar: R$ %.2f\n", imposto);
printf("Salario Anual Liquido: R$ %.2f\n", salario_bruto - imposto);

return 0;
}