#include <stdio.h>

int main()
{
    float salarioMin, horas, eqHoras, imposto, bruto, salarioT;
    printf("Digite a quantidade de horas trabalhadas : ");
    scanf("%f", &horas);
    printf("Digite o valor correspondente ao salario minimo: ");
    scanf("%f", &salarioMin);
    eqHoras = salarioMin/2;
    bruto = horas * eqHoras;
    imposto = bruto * 0.03;
    salarioT = bruto - imposto;

    printf("\nO valor do salario equivale a: %.2f\n\n",salarioT);
    system("PAUSE");


}
