#include <stdio.h>
int main()
{
        float medida, polegada, jardas, milhas, polegadas;


        printf("Digite o valor da medida em pes: ");
        scanf("%f", &medida);

        polegadas = medida * 12;
        jardas = 3 * medida;
        milhas = 1.760 * jardas;

        printf("\nO valor da medida %.2f pes em polegadas eh: %.2f", medida, polegadas);
        printf("\nO valor da medida %.2f pes em jardas eh: %.2f",medida, jardas);
        printf("\nO valor da medida %.2f pes em milhas eh: %.2f\n\n",medida, milhas);

        system("PAUSE");

}
