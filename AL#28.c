/*Faça um algoritmo que leia três números inteiros e ordene-os, na memória, em
ordem crescente e imprima.

Universidade Federal do Espírito Santo

*/

#include <stdio.h>

int main(void)
{
    int n1, n2, n3;

    printf("Digite o valor do primeiro número:\n");
    scanf("%d", &n1);

    printf("Digite o valor do segundo número:\n");
    scanf("%d", &n2);

    printf("Digite o valor do terceiro número:\n");
    scanf("%d", &n3);

    int temp;

    if (n1 > n2)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    if (n1 > n3)
    {
        temp = n1;
        n1 = n3;
        n3 = temp;
    }

    if (n2 > n3)
    {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }

    printf("Os números em ordem crescente são: %d %d %d\n", n1, n2, n3);

    return 0;
}
