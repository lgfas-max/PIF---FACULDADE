#include <stdio.h>

int main(){
float salario;

printf("Digite o seu salario base: ");
scanf("%f", &salario);

//bonus = salario * 0..05
//imposto = salario * 0.07
float salario_novo = salario + (salario * 0.05) - (salario * 0.07);

printf("\nseu salario liquido e: %2.f", salario_novo);

return 0;
}
