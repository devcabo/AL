/*Faça um algoritmo que efetue a apresentação do valor da conversão em real de um
valor lido em dólar. O programa lerá o valor da cotação do dólar e a quantidade de
dólares com o usuário, para apresentar o valor em moeda brasileira.

Universidade Federal do Espírito Santo
*/

#include <stdio.h>

int main(void)
{
    float cotacao, dolares, reais;

    printf("Digite o valor da cotação do dólar: \n");
    scanf("%f", &cotacao);

    printf("Digite quantos dólares você possui: \n");
    scanf("%f", &dolares);

    reais = cotacao * dolares;

    printf("O valor em reais é: R$%2.f\n", reais);

    return 0;
}
