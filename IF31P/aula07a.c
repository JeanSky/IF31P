//Jean César Hilário - RA: 1705628 - Eng. Mecânica
//Programa qye leia 2 números, realizar as operações de soma, subtração, multiplicação e divisão e exiba i resultado das operações.

#include <stdio.h>

int main()
{
    int a, b, soma, sub, multiplicacao;
    float divisao;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    if (b == 0)
    {
        printf("Por favor, digite um numero diferente de 0 para realizar a divisão");
    }
    else
    {
        soma = a + b;
        sub = a - b;
        multiplicacao = a * b;
        divisao = (float)a/b;
        printf("\nA soma vale: %d\nA subtracao vale: %d\nA multiplicacao recebe o valor: %d \nA divisao vale: %f.2\n",soma,sub,multiplicacao, divisao);
    }
    system("PAUSE");
}
