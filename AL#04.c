/*Faça um programa que leia os valores para largura, comprimento e altura de um
paralelepípedo retângulo e calcule o seu volume.

Universidade Federal do Espírito Santo
*/

#include <stdio.h>

int main(void)
{

    // Variáveis de tipo inteiro

    int a, b, c;
    int v;
    // Armazenar valores
    printf("Digite o valor de a: \n");
    scanf("%d", &a);

    printf("Digite o valor de b: \n");
    scanf("%d", &b);

    printf("Digite o valor de c: \n");
    scanf("%d", &c);

    // Lógica
    v = a * b * c;

    // Impressão do resultado
    printf("O resultado do volume do paralelepipedo é: %d", v);
}
