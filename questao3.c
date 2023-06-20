#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {

    float numero[5], maior = 0, menor = 999;
    int i;

    for (i = 0; i < 5; i++) {

        printf("digite o %d numero \n", i + 1);
        scanf("%f", &numero[i]);

        if (numero[i] > maior) {
            maior = numero[i];
        }
        if (numero[i] < menor) {
            menor = numero[i];

        }
    }

        for (i = 0; i < 5; i++) {

            printf(" %d numero informado %.0f \n", i + 1,numero[i]);
        }  
        
        printf("maior numero %.0f \n menor numero %.0f \n",maior,menor);
    
    
    return 0;
}
