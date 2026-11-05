#include <stdio.h>

int main() {
    int idade, tempo;
    printf("Digite a idade e o tempo de servico (anos): ");
    scanf("%d %d", &idade, &tempo);

    if (idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25)) {
        printf("Pode se aposentar.\n");
    } else {
        printf("Nao pode se aposentar.\n");
    }
    return 0;
}