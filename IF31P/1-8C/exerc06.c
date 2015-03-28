#include <stdio.h>

int main ()
{
    float qtdF, alturaX, alturaT;
    int qtdD;
    printf("Digite a altura do degrau: ");
    scanf("%f", &alturaX);
    printf("Digite a altura que voce pretende chegar: ");
    scanf("%f", &alturaT);
    qtdF = alturaT/alturaX;
    qtdD = ((float)alturaT/alturaX);
    if (qtdD < qtdF)
    {
        qtdD = (alturaT/alturaX) + 1;
    }
    else
    {
        qtdD = (alturaT/alturaX);
    }

    printf("\nVoce precisa subir %d degraus!\n\n", qtdD);
    system("PAUSE");

}
