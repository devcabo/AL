/* Imprima a tabuada de um número que o usuário digitar */

#include <stdio.h>

int main()
{
    int inteiro;
    printf("Insira um número inteiro aleatório:\n");
    scanf("%d", &inteiro);
    for (int i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", inteiro, i, inteiro*i);
    }
}
