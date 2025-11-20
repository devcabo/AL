/*Escreva um programa que calcule a média aritmética entre duas notas bimestrais
quaisquer fornecidas por um aluno (usuário).

Universidade Federal do Espírito Santo
*/

#include <stdio.h>

int main(void)
{

// Variáveis de tipo real

float n1, n2;
float media = 0;

// Armazenar valores
printf("Digite o valor da nota 1: \n");
scanf("%f", &n1);

printf("Digite o valor da nota 2: \n");
scanf("%f", &n2);

// Lógica
media = (n1 + n2)/2;

// Impressão do resultado
printf("O resultado da média é: %.2f\n", media);
}
