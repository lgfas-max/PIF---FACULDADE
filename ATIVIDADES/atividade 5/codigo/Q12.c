#include <stdio.h>

void exibeMenu(void) {
printf("--- MENU ---\n");
printf("1 - Cadastrar\n");
printf("2 - Listar\n");
printf("3 - Remover\n");
printf("0 - Sair\n");
printf("Escolha uma opcao: ");
}

int main() {
int opcao;
    
exibeMenu();
scanf("%d", &opcao);
    
switch (opcao) {
    case 1: printf("Opcao escolhida: Cadastrando...\n"); break;
    case 2: printf("Opcao escolhida: Listando...\n"); break;
    case 3: printf("Opcao escolhida: Removendo...\n"); break;
    case 0: printf("Opcao escolhida: Saindo...\n"); break;
    default: printf("Erro: Opcao invalida!\n");
}

return 0;
}