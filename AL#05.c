/*Faça um programa que leia dois valores reais para as variáveis A e B e efetue as
operações de adição, subtração, multiplicação e divisão de A por B, apresentando ao
final os resultados obtidos.

Dados de entrada: A e B
Dados de saída: adição, subtração, multiplicação e divisão de A por B
Universidade Federal do Espírito Santo
*/

#include <stdio.h>

int main(void)
{

    // Variáveis de tipo real

    float a, b;
    float resultado;
    // Armazenar valores
    printf("Digite o valor de a: \n");
    scanf("%f", &a);

    printf("Digite o valor de b: \n");
    scanf("%f", &b);


    // Impressão do resultado
    printf("O resultado da adição é: %.2f\n", a+b);
    printf("O resultado da subtração é: %.2f\n", a-b);
    printf("O resultado da multiplicação é: %.2f\n", a*b);
    printf("O resultado da divisão é: %.2f\n", a/b);
}
