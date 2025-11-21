/*Leia uma letra e imprima uma mensagem “É uma vogal”, se
condizente.
A biblioteca <ctype.h> contém funções para classificação e conversão de caracteres,
como, por exemplo:

Verificar se um caractere é uma letra, número, espaço etc.
Converter caracteres entre maiúsculas e minúsculas.

letra = tolower(letra);

Universidade Federal do Espírito Santo

*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char letra;

    printf("Digite uma letra:\n");
    scanf("%c", &letra);
    letra = tolower(letra);

    if (!isalpha(letra))
    {
        printf("Entrada inválida: não é uma letra\n");
    }

    else if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
    {
        printf("É uma vogal\n");
    }
    else
    {
        printf("É uma consoante\n");
    }
    return 0;
}
