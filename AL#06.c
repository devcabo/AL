/*Escreva um programa para calcular o valor de y como função de x, segundo a função
y = 3x + 2, num domínio real.
Universidade dederal do Espírito Santo
*/

#include <stdio.h>

int main(void)
{

    // Variáveis de tipo inteiro
    int x, y;
  
    // Armazenar valores
    printf("Digite o valor de x: \n");
    scanf("%d", &x);

    // Lógica
    y = 3 * x + 2;

    // Impressão do resultado
    printf("O resultado da função é: %d", y);

}
