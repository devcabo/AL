/*Escreva um programa que leia a quantidade de dias, horas, minutos e segundos do
usuário. Calcule o total em segundos.
Universidade Federal do Espírito Santo
*/

#include <stdio.h>

int main(void)
{
    int dias, horas, minutos, segundos;
    int total;

    printf("Digite a quantidade de dias: ");
    scanf("%d", &dias);

    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas);

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    // Conversão
    total = segundos + minutos * 60 + horas * 3600 + dias * 86400;

    printf("O total em segundos é: %d\n", total);

    return 0;
}

