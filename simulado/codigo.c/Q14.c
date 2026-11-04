#include <stdio.h>

int main() {
    const int SENHA = 2026;
    int tentativa, i;
    int acertou = 0;

    for (i = 1; i <= 3; i++) {
        printf("Tentativa %d de 3 - Digite a senha: ", i);
        scanf("%d", &tentativa);

        if (tentativa == SENHA) {
            acertou = 1;
            break;
        }
        printf("Senha incorreta!\n");
    }

    if (acertou) {
        printf("Acesso Concedido!\n");
    } else {
        printf("Conta Bloqueada por Seguranca!\n");
    }

    return 0;
}