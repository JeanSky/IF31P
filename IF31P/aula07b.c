//Jean César Hilário - RA: 1705628 - Eng. Mecânica
// Programa para testar o uso de ++ e --

#include <stdio.h>

int main()
{
    int a, b;
    printf("Digite um valor inteiro para A: ");
    scanf("%d", &a);
    printf("Digite um valor inteiro para B: ");
    scanf("%d", &b);
    printf("\nO uso da expressao a++ equivale a somar depois de executar!\nAntes A: %d",a++);
    printf("\nDepois A: %d\n\n",a);
    printf("O uso da expressao ++a equivale a somar depois de executar!\nAntes A: %d",++a);
    printf("\nDepois A: %d\n\n",a);
    printf("O uso da expressao a-- equivale a subtrair depois de executar!\nAntes B: %d", b--);
    printf("\nDepois B: %d\n",b);
    printf("O uso da expressao --a equivale a subtrair depois de executar!\nAntes B: %d", --b);
    printf("\nDepois B: %d\n\n",b);
    system("PAUSE");
}
