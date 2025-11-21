/*Escreva um programa que pergunte a velocidade do carro de um
usuário. Caso ultrapasse 80 km/h, exiba uma mensagem dizendo que
o usuário foi multado. Nesse caso, exiba o valor da multa, cobrando
R$ 5 por km acima de 80 km/h.

Universidade Federal do Espírito Santo

*/

#include <stdio.h>

int main(void)
{
    int km, valor;

    printf("Digite o valor da velocidade:\n");
    scanf("%d", &km);

    if (km > 80)
    {
        valor = (km - 80) * 5;
        printf("Você foi multado no valor de %dR$\n", valor);
    }

    return 0;
}
