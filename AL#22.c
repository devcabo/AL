/*Entre com um valor e diga a qual mês do ano o mesmo corresponde.
Se o valor for maior que doze ou menor que um, diga que o valor não
corresponde a nenhum mês.

Universidade Federal do Espírito Santo

*/

#include <stdio.h>

int main(void)
{
    int mes;

    printf("Digite um número para ser determinado qual mês é correspondente ao número:\n");
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:

        printf("Janeiro");
        break;
    case 2:

        printf("Fevereiro");
        break;
    case 3:

        printf("Março");
        break;
    case 4:

        printf("Abril");
        break;
    case 5:

        printf("Maio");
        break;
    case 6:

        printf("Junho");
        break;
    case 7:

        printf("Julho");
        break;
    case 8:

        printf("Agosto");
        break;
    case 9:

        printf("Setembro");
        break;
    case 10:

        printf("Outubro");
        break;
    case 11:

        printf("Novembro");
        break;
    case 12:

        printf("Dezembro");
        break;
    default:

        printf("Entrada inválida: digite um número entre 1 e 12\n");
    }
    return 0;
}
