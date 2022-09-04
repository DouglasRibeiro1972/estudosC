#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, un, dz,ct;

    printf("Digite um numero de 4 digitos ");
    scanf("%i", &num);

    ct = num/100;
    dz = num%100;
    un = dz%10;
    dz = dz/10;
   

    printf("%i, %i, %i ", ct, dz, un);


    return 0;
}