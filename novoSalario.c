#include <stdio.h>
#include <stdlib.h>

main(){
    // Calculo de novo salário
    float salario, novo_salario;
    printf ("\n Digite o salario: ");
    scanf ("%f", &salario);

    if (salario <= 2000)
        novo_salario = salario * 1.30;

        printf ("\n Novo salario = %.2f \n", novo_salario);

        return 0;
}