/*Escreva um algoritmo que calcule o faturamento de um representante comercial que recebe R$ 500,00 fixos e 6% de comissão sobre as vendas do mês,
sabendo que as vendas do mês são lidas do teclado.
Universidade Federal do Espírito Santo */

#include <stdio.h>

int main(void)
{
    float salario_fixo = 500.00;
    float vendas, faturamento;

    printf("Digite o valor das vendas do mês: ");
    scanf("%f", &vendas);

    //condição do faturamento
    faturamento = salario_fixo + (vendas * 0.06);

    //impressão do resultado
    printf("O faturamento do mês foi: R$ %.2f\n", faturamento);

    return 0;
}
