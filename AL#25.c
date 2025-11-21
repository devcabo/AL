/*Receba três números do usuário e verifique se eles podem formar
um triângulo. As condições para ser um triângulo são: a soma de dois
lados deve ser maior que o terceiro lado para todas as combinações.

Universidade Federal do Espírito Santo

*/

#include <stdio.h>

int main(void)
{
    int n1, n2, n3;

    printf("Digite o valor do primeiro lado:\n");
    scanf("%d", &n1);
    printf("Digite o valor do segundo lado:\n");
    scanf("%d", &n2);
    printf("Digite o valor do terceiro lado:\n");
    scanf("%d", &n3);

    if (n1 + n2 > n3 && n1 + n3 > n2 && n2 + n3 > n1)
    {
        printf("É um triângulo\n");
    }
    else
    {
        printf("não é um triângulo\n");
    }

    return 0;
}
