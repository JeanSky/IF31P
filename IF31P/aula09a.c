//Escreva um programa para ler um valor inteiro e escrever o seu sucessor. Dê pelo menos quatro possíveis soluções

#include <stdio.h>

int main()
{
    int num, sA;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    sA = (num + 1);
//  sA = (num++);
//  sA = (++num);
//  sA = (1 + num);
    printf("Utilizando 'Numero  + 1' o sucessor eh: %d\n", sA);
    system("PAUSE");
}
