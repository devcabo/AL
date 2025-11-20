/*Escreva um algoritmo que calcule o faturamento de um representante comercial que
recebe R$ 500,00 fixos e 6% de comissão sobre as vendas do mês, sabendo que as
vendas do mês são lidas do teclado.

Universidade Federal do Espírito Santo
*/

#include <stdio.h>

int main(void)
{
    float s = 500.00; // salário fixo
    float faturamento;
    float vendas; // valor total em reais

    printf("Digite o valor total das vendas no mês: ");
    scanf("%f", &vendas);

    faturamento = s + (vendas * 0.06);

    printf("O faturamento especulado foi de: R$ %.2f\n", faturamento);

    return 0;
}