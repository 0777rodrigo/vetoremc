#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    char nome[5][300];
    int idade[5];
    int i;

    for (i = 0; i < 5; i++)
    {

        printf("informe o nome da %d pessoa \n", i + 1);
        gets(nome[i]);

        printf("informe a idade da %d pessoa \n", i + 1);
        scanf("%d", &idade[i]);

        fflush(stdin);
    }

    for (i = 0; i < 5; i++)
    {

        printf("nome da %d pessoa \n %s \n", i + 1, nome[i]);
        printf("idade da %d pessoa \n %d \n", i + 1, idade[i]);
    }

    return 0;
}
