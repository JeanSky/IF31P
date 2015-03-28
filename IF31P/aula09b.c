#include <stdio.h>

int main()
{
    float base, altura, area;
    printf("Digite o valor da base do triangulo: ");
    scanf("%f", &base);
    printf("Digite o valor da altura do triangulo: ");
    scanf("%f", &altura);

    area = (base * altura)/2;
    printf("A area de um triangulo para base de %.2f e altura %.2f equivale a %.2f\n",base, altura, area);
    system("PAUSE");

}
