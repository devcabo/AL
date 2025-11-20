/*Calcular e exibir o tempo (em horas) de autonomia de uma caixa d’água de um
restaurante que consome 1350 litros por hora em média. O tanque do restaurante é
cilíndrico de base circular de raio (R) e de altura (H) em metros. Sabendo que 1m3 =
1000 litros.
Universidade Federal do Espírito Santo
*/

#include <stdio.h>
#define PI 3.1415

int main(void)
{
    float r, h;    // raio e altura
    float volume_m3, volume_litros, horas;

    // Entrada
    printf("Digite o raio do tanque (m): ");
    scanf("%f", &r);

    printf("Digite a altura do tanque (m): ");
    scanf("%f", &h);

    // Calcula o volume em m³
    volume_m3 = PI * r * r * h;

    // Converte para litros
    volume_litros = volume_m3 * 1000;

    // Autonomia em horas
    horas = volume_litros / 1350;

    // Saída
    printf("A autonomia em horas é: %.2f horas\n", horas);

    return 0;
}
