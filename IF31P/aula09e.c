#include <stdio.h>

const float Lapis = 0.80;
const float Borracha = 0.50;
const float Caneta = 3.50;
const float Caderno = 15.00;

int main()
{
    int qtdLapis, qtdBorracha, qtdCaneta, qtdCaderno;
    float pLapis, pBorracha, pCaneta, pCaderno;

    printf("Digite a quantidade de Lapis a serem comprados: ");
    scanf("%d", &qtdLapis);
    printf("Digite a quantidade de Borrachas a serem compradas: ");
    scanf("%d", &qtdBorracha);
    printf("Digite a quantidade de Canetas a serem compradas: ");
    scanf("%d", &qtdCaneta);
    printf("Digite a quantidade de Cadernos a serem comprados: ");
    scanf("%d", &qtdCaderno);

    pLapis = qtdLapis * Lapis;
    pBorracha = qtdBorracha * Borracha;
    pCaneta = qtdCaneta * Caneta;
    pCaderno = qtdCaderno * Caderno;

    printf("\n\n\tMaterial\tQuantidade\tPreco Total");
    printf("\n\tLapis\t\t     %d\t\t   %.2f", qtdLapis, pLapis);
    printf("\n\tBorracha\t     %d\t\t   %.2f", qtdBorracha, pBorracha);
    printf("\n\tCaneta\t\t     %d\t\t   %.2f", qtdCaneta, pCaneta);
    printf("\n\tCaderno\t\t     %d\t\t   %.2f\n\n", qtdCaderno, pCaderno);
    system("PAUSE");


}
