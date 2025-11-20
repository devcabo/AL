/*Calcular e exibir a distância entre dois pontos quaisquer.
Universidade Federal do Espírito Santo
*/

#include <stdio.h>
#include <math.h>

int main(void)
{

    // Variáveis de tipo inteiro
    float y1, y2, x1, x2;
    float resultado;

    // Armazenar valores
    printf("Digite o valor de x1: \n");
    scanf("%f", &x1);
    printf("Digite o valor de x2: \n");
    scanf("%f", &x2);
    printf("Digite o valor de y1: \n");
    scanf("%f", &y1);
    printf("Digite o valor de y2: \n");
    scanf("%f", &y2);

    // Lógica
    resultado = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Impressão do resultado
    printf("a distância entre os dois pontos é: %.2f\n", resultado);

    return 0;
}
