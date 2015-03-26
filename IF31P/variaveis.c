#include <stdio.h>
#define pi 3.14

main () {

    int inteiro;
    float flutuante, soma, raio, comp;
    char letra;

    inteiro = 2;
    flutuante = 2.54;
    letra = 'J';

    soma = inteiro + flutuante;
    printf("O comprimento de circunferência equivale a %.2f vezes o raio\n\n",pi);
    printf("O valor da variavel inteiro eh %d, e o da variavel flutuante eh %f \n\n A soma dos dois equivale a %f\n\n",inteiro,flutuante, soma);
    printf("A primeira letra de Jean eh: %c\n\n",letra);
    system("PAUSE");

}
