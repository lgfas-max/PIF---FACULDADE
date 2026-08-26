#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;
    double media;

    printf("\nDigite tres valores inteiros\n");
    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &n3);

    media = (n1 + n2 + n3) / 3.0;

    printf("A media aritmetica e: %.2f\n", media);

    system("PAUSE");
    return 0;
}