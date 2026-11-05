#include <stdio.h>

int main() {
    int opcao;
    printf("1 - Consultar Saldo\n2 - Efetuar Extrato\n3 - Fazer Transferencia\n4 - Falar com Atendente\nOpcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1: printf("Direcionando para Consulta de Saldo...\n"); break;
        case 2: printf("Direcionando para Emissao de Extrato...\n"); break;
        case 3: printf("Direcionando para Transferencia...\n"); break;
        case 4: printf("Aguarde, transferindo para um atendente...\n"); break;
        default: printf("Erro: Opcao Invalida!\n");
    }
    return 0;
}