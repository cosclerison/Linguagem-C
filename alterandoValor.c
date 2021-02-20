#include <stdio.h>
#include <stdlib.h>

main()
{
    int valor, resultado;
    printf("\n Digite um valor:  ");
    scanf("%d", &valor);

    if (valor == 0)
        resultado = valor + 5;
    else if (valor <= 0)
        resultado = valor * 3;
    else
        resultado = valor - 7;

    printf("\n valor = %d \n\n", resultado );

    return 0;
}