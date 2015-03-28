#include <stdio.h>

int main()
{
    int a, b, c, teste;

    printf("Digite dois valores inteiros, para A e B: ");
    scanf("%d %d", &a, &b);
    printf("O valor normal para A eh: %d\n",a);
    printf("O valor normal para B eh: %d\n",b);

    c = a;
    a = b;
    b = c;

    printf("O novo valor de A eh: %d\n",a);
    printf("O novo valor de B eh: %d\n",b);
    system("PAUSE");

}
