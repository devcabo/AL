/*Escreva um programa que calcule o tempo de uma viagem de carro. Pergunte a
distância a percorrer e a velocidade média esperada para a viagem.

Universidade Federal do Espírito Santo
*/

#include <stdio.h>

int main(void)
{

    // Variáveis inteiras
    int tempo, distancia, velocidade_media;


    // Armazenamento de valores
    printf("Qual o valor da distância?\n");
    scanf("%d", &distancia);
    printf("Qual o valor da velocidade média?\n");
    scanf("%d", &velocidade_media);
    // Lógica
    tempo = distancia / velocidade_media;

    // Impressão do resultado
    printf("O tempo foi de: %d\n", tempo);

    return 0;
}
