#include <stdio.h>

int main() {
    const int SENHA = 2026;
    int tentativa, i;

    for (i = 1; i <= 3; i++) {
        printf("Tentativa %d - digite a senha: ", i);
        scanf("%d", &tentativa);
        if (tentativa == SENHA) {
            printf("Acesso Concedido!\n");
            printf("Tentativas utilizadas: %d\n", i);
            return 0;
        }
    }
    printf("Conta Bloqueada por Seguranca!\n");
    return 0;
}