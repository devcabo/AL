/*O usuário insere a quantidade de notas que devem ser lidas
e o programa automaticamente calcula a média das notas recebidas.*/

#include <stdio.h>

int main(void)
{

    int quantidade;
    printf("Insira a quantidade de notas que devem ser lidas: \n");
    scanf("%d", &quantidade);

    float notas[quantidade];

    for (int i = 0; i < quantidade; i++)
    {
        printf("Insira a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
    float soma = 0;

    for (int i = 0; i < quantidade; i++)
    {
        soma += notas[i];
    }

    printf("Média: %.2f\n", soma / quantidade);

    return 0;
}
