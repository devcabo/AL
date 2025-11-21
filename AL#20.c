/*Leia um valor numérico inteiro e apresente o valor lido como sendo
um valor positivo, negativo ou igual a zero.

Universidade Federal do Espírito Santo

*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("Digite um número para determinar suas propriedades:\n");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("O número é positivo\n");
    }
    else if (n < 0)
    {
        printf("O número é negativo\n");
    }
    else
    {
        printf("O número é zero\n");
    }

    return 0;
}
