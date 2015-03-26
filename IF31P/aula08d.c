#include <stdio.h>
#include <math.h>

int main()
{
    float distancia, x1, x2, y1, y2, varX, varY, soma;
    printf("Digite o valor de x1 e y1 do primeiro ponto: ");
    scanf("%f %f", &x1, &y1);
    printf("digite o valor de x2 e y2 do segundo ponto: ");
    scanf("%f %f", &x2, &y2);
    varX = pow(x2-x1,2);
    varY = pow(y2-y1,2);
    soma = varX + varY;
    distancia = sqrt(soma);
    printf("A distancia entre os pontos P1(%.2f,%.2f) e P2(%.2f,%.2f) equivale a: %.2f",x1,y1,x2,y2,distancia);
    system("PAUSE");
}
