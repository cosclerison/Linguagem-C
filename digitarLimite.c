#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,inicio, final;
    printf("\n Digite o numero inicial:  ");
    scanf("%d", &inicio);

    printf("\n Digite o numero final:  ");
    scanf("%d", &   final);

    for (i = inicio; i <= final; i++)
        printf("\n %d", i);

        system("pause");
}
