#include <stdio.h>

int main()
{
    float salario, conta1, conta2, conta1m, conta2m, salarioT;
    printf("Digite o valor do salario: ");
    scanf("%f", &salario);
    printf("Digite o valor da primeira conta: ");
    scanf("%f", &conta1);
    printf("Digite o valor da segunda conta: ");
    scanf("%f", &conta2);

    conta1m = conta1 + (conta1 * 0.02);
    conta2m = conta2 + (conta2 * 0.02);
    salarioT = salario - conta1m - conta2m;

    printf("O salario total equivale a: %.2f\n\n", salarioT);
    system("PAUSE");
}
