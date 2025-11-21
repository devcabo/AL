/*Escreva um programa para calcular a redução do tempo de vida de um fumante.
Pergunte a quantidade de cigarros fumados por dia e quantos anos ele já fumou.
Considere que um fumante perde 10 minutos de vida a cada cigarro, calcule quantos
dias de vida um fumante perderá. Exiba o total em dias.

Universidade Federal do Espírito Santo
*/

#include <stdio.h>

int main(void)
{
    int quantidade_cigarro, quantidade_anos;
    int dias_fumando;
    int minutos_perdidos_por_dia;
    int total_minutos_perdidos;
    int dias_perdidos;

    // Entrada
    printf("Quantos cigarros por dia?\n");
    scanf("%d", &quantidade_cigarro);

    printf("Há quantos anos fuma?\n");
    scanf("%d", &quantidade_anos);

    // Cálculos
    minutos_perdidos_por_dia = quantidade_cigarro * 10;
    dias_fumando = quantidade_anos * 365;

    total_minutos_perdidos = minutos_perdidos_por_dia * dias_fumando;

    dias_perdidos = total_minutos_perdidos / (60 * 24);

    // Saída
    printf("O fumante perdeu aproximadamente %d dias de vida.\n", dias_perdidos);

    return 0;
}

