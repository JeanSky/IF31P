#include <stdio.h>
int main()
{
    int totaleleitores, branco, nulo, validos;
    float qtdB, qtdN, qtdV;
    printf("Digite o total de eleitores: ");
    scanf("%d", &totaleleitores);
    printf("Digite a quantidade de votos brancos: ");
    scanf("%d", &branco);
    printf("Digite a quantidade de votos nulos: ");
    scanf("%d", &nulo);
    printf("Digite a quantidade de votos validos: ");
    scanf("%d", &validos);

    if (totaleleitores != (branco+nulo+validos))
    {
        printf("A quantidade de votos informada nao equivale a quantidade de eleitores");
    }
    else
    {
        qtdB = ((float)branco/totaleleitores)*100;
        qtdN = ((float)nulo/totaleleitores)*100;
        qtdV = ((float)validos/totaleleitores)*100;

        printf("\nA porcentagem de votos brancos eh: %.2f",qtdB);
        printf("\nA porcentagem de votos nulos eh: %.2f",qtdN);
        printf("\nA porcentagem de votos validos eh: %.2f",qtdV);
    }


    system("PAUSE");
}
