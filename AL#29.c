/*Uma empresa de eventos cobra por lembranças conforme a seguir:
• até 300: Sem desconto;
• mais que 300 até 1000: 5% de desconto;
• maior que 1000 lembranças: 10% de desconto.
Cada lembrancinha é 10R$.
Escrever um algoritmo que leia a quantidade e o valor das lembrancinhas e

determine o TOTAL a pagar pelo cliente.

Universidade Federal do Espírito Santo

*/

#include <stdio.h>

int main(void)
{
    int lemb;
    float total;

    printf("Digite a quantidade de lembranças compradas:\n");
    scanf("%d", &lemb);

    if (lemb <= 300)
    {
        total = lemb * 10;
    }
    else if (lemb <= 1000)
    {
        total = lemb * 10 * 0.95; // 5% de desconto
    }
    else
    {
        total = lemb * 10 * 0.90; // 10% de desconto
    }

    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}
