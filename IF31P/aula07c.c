//Jean César Hilário - RA: 1705628 - Eng. Mecânica
//Programa que leia diferentes tipos de variáveis e imprima na tela os respectivos valores

#include <stdio.h>

int main()
{
    int a;
    long int b;
    float c;
    double d;
    char e;
    printf("Digite um valor integer: ");
    scanf("%d", &a);
    printf("Digite um valor long integer: ");
    scanf("%ld", &b);
    printf("Digite um valor float: ");
    scanf("%f", &c);
    printf("Digite um valor double float: ");
    scanf("%lf", &d);
    printf("Digite um character: ");
    scanf("%s", &e);

    printf("\n\nO valor integer digitado foi: %d\nO valor long integer foi: %ld\nO valor float foi: %f\nO valor double foi: %lf\nO caractere digitado foi: %c",a,b,c,d,e);
    system("PAUSE");
}
