//Jean C�sar Hil�rio - RA: 1705628 - Eng. Mec�nica
//Programa qye leia 2 n�meros, realizar as opera��es de soma, subtra��o, multiplica��o e divis�o e exiba i resultado das opera��es.

#include <stdio.h>

int main()
{
    int a, b, soma, sub, multiplicacao;
    float divisao;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    if (b == 0)
    {
        printf("Por favor, digite um numero diferente de 0 para realizar a divis�o");
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
