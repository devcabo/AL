/*Ler dois valores para as variáveis A e B, efetuar a troca de valores de forma que a
variável A passe a possuir o valor da variável B e que a variável B passe a possuir o
valor da variável A. Apresentar os valores trocados.
Universidade federal do Espírito Santo
*/

#include <stdio.h>

int main(void)
{

    // Variáveis de tipo inteiro
    int a, b, auxiliar;

    // Armazenar valores
    printf("Digite o valor de a: \n");
    scanf("%d", &a);
    printf("Digite o valor de b: \n");
    scanf("%d", &b);

    // Lógica
    auxiliar = a;
    a = b;
    b = auxiliar;

    // Impressão do resultado
    printf("O resultado de a: %d\n", a);
    printf("O resultado de b: %d\n", b);
}
