#include <stdio.h>
#include <stdlib.h>

main() 
{
    float av1,av2,av3,av4,soma;
    printf("\n Escreva a avaliação 1 ");
    scanf("%f", &av1);
    printf("\n Escreva a avaliação 2 ");
    scanf("%f", &av2);
    printf("\n Escreva a avaliação 3 ");
    scanf("%f", &av3);
    printf("\n Escreva a avaliação 4 ");
    scanf("%f", &av4);
    soma = (av1 + av2 + av3 + av4) / 4;
    if (soma > 6)
        printf("\n Aluno tirou = %f e passou de ano! \n\n\n ", soma);
    else
        printf("\n Aluno tirou = %f não passou de ano! \n\n\n ", soma);
    system("pause");
        printf("\n Finalizando.......");

    return 0;
}