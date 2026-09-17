#include <stdio.h>

int main(){
int dias;

printf("Quantos dias de trabalho?: ");
scanf("%d", &dias);

int bruto = dias * 30;
float liquido = bruto * (1.0 - 0.08);

printf("Vai receber de bruto: %d\n", bruto);
printf("Vai receber de liquido: %.2f", liquido);

return 0; 
}