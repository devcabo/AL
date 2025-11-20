/*Escreva um programa que pergunte a quantidade de km percorridos por um carro
alugado pelo usuário, assim como a quantidade de dias pelos quais o carro foi
alugado. Calcule o preço a pagar, sabendo que o carro custa R$ 60 por dia e R$ 0,15
por km rodado.

Universidade Federal do Espírito Santo
*/

#include <stdio.h>

int main(void)
{

    // Variáveis inteiras
    float quantidade_km, quantidade_dia, pagamento;


    // Armazenamento de valores
    printf("Quantos km rodados?\n");
    scanf("%f", &quantidade_km);
    printf("Quantos dias?\n");
    scanf("%f", &quantidade_dia);

    // Lógica
    pagamento = (60*quantidade_dia) + (0.15*quantidade_km);

    // Impressão do resultado
    printf("O quanto deve ser pago é: %.2f\n", pagamento);

    return 0;
}
