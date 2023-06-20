#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

float media, somanotas, nota[4];
int i;

for (i = 0; i < 4; i++)
{
    
printf("digite a %d nota \n", i + 1);
scanf("%f",&nota[i]);

somanotas += nota[i];
}

media = somanotas / 4;

for (i = 0; i < 4; i++)
{
    
printf("%d nota foi: %.1f \n", i + 1,nota[i]);

}

if(media >=7)
{

printf("aprovado");

} else if (media >= 5) {

printf("recuperacao");
} else if (media < 5) {

printf("reprovado");

}
printf("\n a media foi: %.1f \n",media);



return 0;

}