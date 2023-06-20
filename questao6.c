#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

float numero[10], quantidadenegativos = 0, somapositivos = 0;
int i;    

for (i = 0; i < 10; i++) {
    
printf("digite o %d numero \n",i + 1);
scanf("%d",&numero[i]);

if (numero[i] > 0) {
somapositivos += numero[i];   
somapositivos = 0;

} else {
  quantidadenegativos ++;  

}

}

printf("soma dos numeros positivos %.0f \n",somapositivos);
printf("quantidade de numeros negativos %.0f \n",quantidadenegativos);


return 0;

}
