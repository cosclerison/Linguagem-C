#include <stdio.h>
#include <stdlib.h>
main()
{
   int i, resto;
   for (i = 1; i <= 10; i++)
   {
       resto = i % 2;
       if(resto == 0)
            printf("\n Este numero %d é (PAR) ", i);
        else
            printf("\n Este numero %d é (IMPAR) ", i);
   }
   system("pause");
    // return 0;
}
