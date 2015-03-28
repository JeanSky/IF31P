#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, num3, soma;
    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    soma = (pow(num1,2) + pow(num2,2) + pow(num3,2));

    printf("\nA soma dos quadrados dos numeros %d, %d e %d equivale a: %d\n\n", num1, num2, num3, soma);
    system("PAUSE");

}
