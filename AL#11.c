/*Leia uma temperatura em graus Celsius e apresente-a convertida em graus
Fahrenheit. A fórmula de conversão é F = 9 ∗ C + 160 /5.
Universidade Federal do Espírito Santo
*/

#include <stdio.h>

int main(void)
{
    int c;
    int f;

    printf("Digite quantos °C\n");
    scanf("%d", &c);

    f = (9 * c + 160) / 5;

    printf("Graus °F%d\n", f);
}
