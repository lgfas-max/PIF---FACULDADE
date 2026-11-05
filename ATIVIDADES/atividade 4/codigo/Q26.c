#include <stdio.h>

int main() {
    int mes, ano, dias;
    printf("Mes (1-12) e Ano: ");
    scanf("%d %d", &mes, &ano);

    switch(mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
            dias = 31; break;
        case 4: case 6: case 9: case 11: 
            dias = 30; break;
        case 2:
            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                dias = 29;
            } else {
                dias = 28;
            }
            break;
        default: printf("Mes invalido.\n"); return 1;
    }
    printf("O mes %d do ano %d tem %d dias.\n", mes, ano, dias);
    return 0;
}