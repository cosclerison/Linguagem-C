#include <stdio.h>
#include <stdlib.h>

main()
{
    char tamanho;
    do{
    fflush(stdin);
    printf("\n  Digite o tamanho [ G para grande ou M para medio ] ou [ F ]  para finalizar! \n\n");
    scanf("%c", &tamanho);
    switch (tamanho)
    {
    case 'g':
    case 'G':
        printf("\n Tamanho [G] \n");
        break;
    case 'm':
    case 'M':
        printf("\n Tamanho [M] \n");
        break;
    case 'p':
    case 'P':
        printf("\n Tamanho [P] \n");
        break;
    case 'f':
    case 'F':
        printf("\n Finalizando.... \n");
        break;
    default:
        printf("\n Digite [P],[M] ou [G].");
        break;
    system("pause");
    }
    } while (tamanho != 'f' && tamanho != 'F');

}
