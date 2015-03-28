#include <stdio.h>

int main()
{
    float precoF, lucro, imposto;
    float Plucro, Pimposto, Ptotal;
    float valLucro, valImposto;

    printf("Digite o preco de fabrica do veiculo: ");
    scanf("%f", &precoF);
    printf("Digite o percentual de lucro do distribuidor: ");
    scanf("%f", &lucro);
    printf("Digite o porcentual de impostos: ");
    scanf("%f", &imposto);

    Plucro = (lucro * 100) / precoF;
    Pimposto = (imposto * 100) / precoF;
    valLucro = (precoF * Plucro) / 100;
    valImposto = (precoF * Pimposto) / 100;

    Ptotal = precoF + valLucro + valImposto;

    printf("\nO valor que corresponde ao lucro equivale a: %.2f",valLucro);
    printf("\nO valor que corresponde aos impostos equivale a: %.2f",valImposto);
    printf("\nO valor final do veiculo eh: %.2f\n\n",Ptotal);

    system("PAUSE");


}
