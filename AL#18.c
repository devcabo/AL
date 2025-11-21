/*Faça um algoritmo em C que leia dois números e escreva o maior. Se
forem iguais imprima uma mensagem.

Universidade Federal do Espírito Santo

*/

#include <stdio.h>

int main(void)
{

    int n1, n2;

    printf("Digite o primeiro número: \n");
    scanf("%d", &n1);
    printf("Digite o segundo número: \n");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("O primeiro número é maior que o segundo\n");
    }
    else if (n1 < n2)
    {
        printf("O segundo número é maior que o primeiro\n");
    }
    else
    {
        printf("Os números são iguais\n");
    }

    return 0;
}
