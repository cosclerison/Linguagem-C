#include <stdio.h>
#include <stdlib.h>

main()
{
    char tamanho;
    do {
    printf("\n Digite o tamanho [ G para grande ou M para medio ] ");
    scanf("%c", &tamanho);

    while (tamanho != 'M' && tamanho != 'P' && tamanho != 'G' && tamanho != 'F')
    {
        fflush(stdin);
        printf("\n Digite NOVAMENTE o tamanho [ P M G ] < F para Finalizar>");
        scanf("%c", &tamanho);
    }
    
    if (tamanho == 'g' || tamanho == 'G')
        printf("\n Tamanho escolhido [ G ] \n\n");
    else if (tamanho == 'm' || tamanho == 'M')
        printf("\n Tamanho escolhido [ M ] \n\n");
    else if (tamanho == 'p' || tamanho == 'P')
        printf("\n Tamanho escolhido [ P ] \n\n");
    else
        printf("\n Finalizando........ \n\n");
    } 
    while (tamanho != 'f' && tamanho != 'F');

    system("pause");
}
