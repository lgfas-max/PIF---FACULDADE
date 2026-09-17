#include <stdio.h>

int main() {
int h_inicio, m_inicio, s_inicio, duracao;
    
printf("Digite o horario de inicio (hh mm ss): ");
printf("Digite a duracao total em segundos: ");
scanf("%d", &duracao);

int total_segundos = (h_inicio * 3600) + (m_inicio * 60) + s_inicio + duracao;

int h_fim = (total_segundos / 3600) % 24;
int m_fim = (total_segundos % 3600) / 60;
int s_fim = total_segundos % 60;

printf("Horario de termino: %02d:%02d:%02d\n", h_fim, m_fim, s_fim);
    
return 0;
}