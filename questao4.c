#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    int numero[6], par = 0, impar = 0;
    int i;

    for (i = 0; i < 6; i++)
    {

        printf("digite o %d numero \n", i + 1);
        scanf("%d", &numero[i]);

        if (numero[i] % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }

    for (i = 0; i < 6; i++)
    {

        printf("%d numero %d \n", i + 1, numero[i]);
    }
    printf("%d numeros par \n %d numeros impar \n", par, impar);

    return 0;
}
