#include <stdio.h>

int main()
{
    float salarioM, qtdW, valW, valPago, valDesc;
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salarioM);
    printf("Digite a quantidade de quilowatts consumida: ");
    scanf("%f", &qtdW);

    valW = salarioM/5;
    valPago = valW * qtdW;
    valDesc = valPago - (valPago*0.15);
    printf("\nO valor de cada quilowatt eh: %.2f", valW);
    printf("\nO valor a ser pago pela residencia eh: %.2f", valPago);
    printf("\nO valor a ser pago com 15%% de desconto eh: %.2f\n\n",valDesc);
    system("PAUSE");
}
