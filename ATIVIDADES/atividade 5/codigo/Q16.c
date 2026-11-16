#include <stdio.h>

int ehBissexto(int ano) {

if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
    return 1;
}
return 0;
}

int main() {
int ano;
printf("Digite o ano: ");
scanf("%d", &ano);
    
if (ehBissexto(ano)) {
    printf("O ano %d e bissexto.\n", ano);
} else {
    printf("O ano %d nao e bissexto.\n", ano);
}
    
return 0;
}