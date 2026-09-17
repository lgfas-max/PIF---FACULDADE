#include <stdio.h>
#include <math.h>

int main() {
float degrau_cm, altura_desejada_m;
    
printf("Altura do degrau (cm): ");
scanf("%f", &degrau_cm);
printf("Altura total a alcancar (m): ");
scanf("%f", &altura_desejada_m);

float altura_desejada_cm = altura_desejada_m * 100.0;
double degraus = ceil(altura_desejada_cm / degrau_cm);

printf("Numero minimo de degraus: %.0f\n", degraus);
    
return 0;
}