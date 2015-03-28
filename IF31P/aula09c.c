//C = (5 * (F-32)/9)
int main()
{
    float C, F, conversao;
    printf("Digite o valor da temperatura em Fahrenheit: ");
    scanf("%f",&F);

    C = (5 * (F-32)/9);

    printf("\nO valor de %.2f oF equivale a %.2f oC!\n",F,C);
    system("PAUSE");


}
