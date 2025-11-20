/*Leia 10 números e imprima a soma dos números ímpares.

Universidade Federal do Espírito Santo
*/

#include <stdio.h>

int main(void)
{
    int n;
    int soma = 0;

    //loop para ler os números
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &n);

        // condição ímpar
        if (n % 2 != 0)
        {
            soma += n;
        }
    }
    
    //impressão do resultado
    printf("A soma dos números ímpares é: %d\n", soma);

    return 0;
}
