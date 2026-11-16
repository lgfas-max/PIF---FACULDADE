#include <stdio.h>

#define SQR(x) ((x)*(x))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

int main() {
int n1, n2;
printf("Digite dois inteiros: ");
scanf("%d %d", &n1, &n2);
    
printf("Quadrado primeiro: %d\n", SQR(n1));
printf("Quadrado segundo: %d\n", SQR(n2));
printf("Maior: %d\n", MAX(n1, n2));
printf("Menor: %d\n", MIN(n1, n2));
    
return 0;
}