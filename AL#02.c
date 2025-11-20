/*Escreva a sequência de comandos necessária para o cálculo da área de um triângulo
de modo que a base e a altura do triângulo sejam lidas do teclado. Considere-as
números reais

Universidade Federal do Espírito Santo
*/

#include <stdio.h>

int main(void)
{

    // Variáveis de tipo real
    float b;
    float h;
    float area;

    // Armazenar os valores
    printf("Digite á base do triângulo: \n", b);
    scanf("%f", &b);

    printf("Digite á altura do triângulo: \n", b);
    scanf("%f", &h);

    // Lógica
    area = b * h / 2;

    // Impressão do resultado
    printf("A área do triângulo é %f", area);

    return 0;
}
