#include <stdio.h>
int main(){
float nota1, nota2, nota3, media;

printf("Digite a nota do Trabalho de Laboratorio: ");
scanf("%f", &nota1);
printf("Digite a nota da Avaliacao Semestral: ");
scanf("%f", &nota2);
printf("Digite a nota do Exame Final: ");
scanf("%f", &nota3);
media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;
if (media >= 5){
    printf("Aprovado com media: %.2f\n", media);
} else if (media >= 3 && media < 5) {
    printf("Em recuperacao com media: %.2f\n", media);
} else if (media < 3)  {
    printf("Reprovado com media: %.2f\n", media);
}
return 0;
}