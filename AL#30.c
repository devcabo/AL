/*Escrever um algoritmo que leia dois números inteiros N1 e N2 e exiba o resultado
da operação aritmética (+ - * / %) entre eles, respectivamente, conforme
Operador escolhido pelo usuário.

Universidade Federal do Espírito Santo

*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    int n1, n2;
    char u[20];  // string para guardar a operação

    printf("Digite o número 1:\n");
    scanf("%d", &n1);

    printf("Digite o número 2:\n");
    scanf("%d", &n2);

    printf("O que você deseja fazer (somar/subtrair/multiplicar/dividir/resto)?\n");
    scanf("%s", u);  // sem & porque strings já são endereços

    if (strcmp(u, "somar") == 0)
    {
        printf("O resultado da soma é: %d\n", n1 + n2);
    }
    else if (strcmp(u, "subtrair") == 0)
    {
        printf("O resultado da subtração é: %d\n", n1 - n2);
    }
    else if (strcmp(u, "multiplicar") == 0)
    {
        printf("O resultado da multiplicação é: %d\n", n1 * n2);
    }
    else if (strcmp(u, "dividir") == 0)
    {
        printf("O resultado da divisão é: %d\n", n1 / n2);
    }
    else if (strcmp(u, "resto") == 0)
    {
        printf("O resultado do resto é: %d\n", n1 % n2);
    }
    else
    {
        printf("Operação inválida!\n");
    }

    return 0;
}
