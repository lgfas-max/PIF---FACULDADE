#include <stdio.h>

int main() {
    int num, i, achou = 0;
    printf("Informe NUM: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            achou = 1;
        }
    }
    if (!achou)
        printf("Nenhum numero multiplo de 3 e 5 ao mesmo tempo.");
    printf("\n");
    return 0;
}