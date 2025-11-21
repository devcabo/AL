/*Escreva um programa que pergunte o salário do funcionário e calcule
o valor do aumento. Para salários superiores a R$ 1.250,00, calcule
um aumento de 10%. Para os inferiores ou iguais, de 15%.

Universidade Federal do Espírito Santo

*/

#include <stdio.h>

int main(void)
{
    float salario, aumento, novo_salario;

    printf("Digite o valor do salário:\n");
    scanf("%f", &salario);

    if (salario > 1250)
    {
        aumento = salario * 0.10;
    }
    else
    {
        aumento = salario * 0.15;
    }

    novo_salario = salario + aumento;

    printf("O aumento foi de: R$ %.2f\n", aumento);
    printf("O novo salário é: R$ %.2f\n", novo_salario);

    return 0;
}
