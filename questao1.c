#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

setlocale(LC_ALL,"portuguese");



float somanotas, media, nota[3];
int i;
int contador;

for (i = 0; i < 3; i++)
{
    
printf("digite a %d nota \n", i + 1);
scanf("%f",&nota[i]);

somanotas += nota[i];

}

media = somanotas / 3;

for (i = 0; i < 3; i++)
{
    
printf("%d nota foi : %.1f \n ",i + 1,nota[i]);    

}

printf("a media foi: %.1f \n ",media);

return 0;
}