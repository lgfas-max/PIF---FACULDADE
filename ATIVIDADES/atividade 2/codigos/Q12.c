#include <stdio.h>

int main() {
int num;
    
printf("Digite um numero inteiro: ");
scanf("%d", &num);

int antecessor = num;
int sucessor = num;

--antecessor;
++sucessor;

printf("Antecessor: %d | Sucessor: %d\n", antecessor, sucessor);
    
return 0;
}