#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;
    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);
    printf("Digite a terceira nota: ");
    scanf("%f",&nota3);

    media = ((nota1*2) + (nota2*3) + (nota3*5))/10;

    printf("\nA media das notas 1, 2 e 3 para os pesos 2, 3 e 5 respectivamente eh: %.2f",media);

}
