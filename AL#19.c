/*Escrever um algoritmo que determine se um número inteiro e positivo,
lido do usuário, é PAR ou ÍMPAR.

Universidade Federal do Espírito Santo

*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("Digite um número para determinar se é par ou ímpar:\n");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("O número é par\n");
    }
    else
    {
        printf("O número é ímpar\n");
    }
}
