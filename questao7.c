#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

int numero[6];
int i;

for (i = 0; i < 6; i++) {

do {
    
printf("digite o %d numero par \n",i + 1);
scanf("%d",&numero[i]);

} while (numero[i] % 2 == 1);


}

printf(" \n \n \n");


for (i = 5; i >= 0; i--) {

printf("%d numero par \n %d \n",i + 1,numero[i]);
   
}

return 0;

}
