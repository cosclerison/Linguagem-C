#include <stdio.h>
#include <stdlib.h>

main() 
{
    int num;

    printf("\n Digite a tabuada ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
        printf("\n %d X %d = %d ", i, num, i * num);
    system("pause");
}