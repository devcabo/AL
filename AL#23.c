/*Faça um programa para calcular as raízes de uma equação do
segundo grau. Forneça de entrada os coeficientes do polinômio de
grau 2. Se o coeficiente a for zero, mande uma mensagem que o
polinômio não é de segundo grau.

Universidade Federal do Espírito Santo

-b +- (b^2-4ac)^1/2 /2a

*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;
    double delta, raiz1, raiz2;

    printf("Digite o valor de a:\n");
    scanf("%lf", &a);

    if (a == 0)
    {
        printf("Polinômio não é de segundo grau\n");
        return 0;
    }

    printf("Digite o valor de b:\n");
    scanf("%lf", &b);

    printf("Digite o valor de c:\n");
    scanf("%lf", &c);

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0)
    {
        printf("A equação não possui raízes reais (delta < 0)\n");
    }
    else
    {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);

        printf("As raízes são:\n");
        printf("x1 = %.2lf\n", raiz1);
        printf("x2 = %.2lf\n", raiz2);
    }

    return 0;
}
