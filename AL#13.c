/*Leia dois números inteiros e exiba o resto da divisão do primeiro pelo segundo.

Universidade Federal do Espírito Santo
*/

#include <stdio.h>

int main(void)
{

    // Variáveis reais
    int n1, n2, resto;


    // Armazenamento de valores
    printf("Dite o valor do 1° número: \n");
    scanf("%d", &n1);
    printf("Dite o valor do 2° número: \n");
    scanf("%d", &n2);

    // Lógica
    resto = n1 % n2;

    // Impressão do resultado
    printf("O resto da divisão do 1° pelo 2° é: %d\n", resto);
}
