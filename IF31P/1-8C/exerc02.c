#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, num3, soma, valor;
    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    soma = (num1 + num2 + num3);
    valor = pow(soma,2);

    printf("\nA soma dos numeros %d, %d e %d equivale a %d\nElevado ao quadrado corresponde a: %d\n\n", num1, num2, num3, soma, valor);
    system("PAUSE");

}
