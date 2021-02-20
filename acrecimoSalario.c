#include <stdio.h>
#include <stdlib.h>

main()
{
    int salario, acrecimo, novoSalario;
    printf("\n Digite o seu salario para analise: ");
    scanf( "%d", &salario);
    if (salario <= 800)
        acrecimo = salario * 0.10;
    else
        acrecimo = salario * 0.20;

    novoSalario = salario + acrecimo;

        printf("\n Salario novo %d \n\n", novoSalario);
    
    return 0;
    
}