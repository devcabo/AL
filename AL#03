/*Escreva um algoritmo que leia um conjunto de 10 números inteiros e
mostre qual foi o maior e o menor valor fornecido.

Universidade Federal do Espírito Santo
*/

#include <stdio.h>

int main(void)
{
    int n;
    int maior, menor;

    printf("Digite um número: ");
    scanf("%d", &n);

    // Inicializa o maior e o menor com o primeiro valor lido
    maior = n;
    menor = n;

    // Lê os outros 9 números
    for (int i = 1; i < 10; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &n);

        if (n > maior)
            maior = n;

        if (n < menor)
            menor = n;
    }

    //impressão do resultado
    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}

