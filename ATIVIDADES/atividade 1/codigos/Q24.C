#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%-10s%s\n", "ALUNO(A)", "NOTA");
    printf("%-10s%s\n", "=========", "=====");
    printf("%-10s%.1f\n", "ALINE", 9.0);
    printf("%-10s%.1f\n", "MARIO", 10.0);
    printf("%-10s%.1f\n", "SERGIO", 4.5);
    printf("%-10s%.1f\n", "SHIRLEY", 7.0);

    system("PAUSE");
    return 0;
}