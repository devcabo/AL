/*Leia 10 números e imprima a soma dos números ímpares.

Universidade Federal do Espírito Santo
*/

#include <stdio.h>

int main(void)
{
    int n;
    int soma = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &n);

        if (n % 2 != 0)
        {
            soma += n;
        }
    }

    printf("A soma dos números ímpares é: %d\n", soma);

    return 0;
}
