#include <stdio.h>
int main() {
int ano;
do {
printf("Digite um ano: ");
scanf("%d", &ano);
 } while (ano <= 0);
if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
    printf("esse ano e bissexto");
} else {
    printf("Esse ano nao e bissexto");
}
return 0;
}