/*Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar
todos os cavalos comprados para um haras.

Universidade Federal do Espírito Santo
*/

#include <stdio.h>

int main(void)
{

    // Variáveis inteiras
    int ferradura = 4, cavalo;


    // Armazenamento de valores
    printf("Quantos cavalos foram comprados?: \n");
    scanf("%d", &cavalo);

    // Lógica
    ferradura *= cavalo;

    // Impressão do resultado
    printf("A quantidade de ferradura é: %d\n", ferradura);
}
