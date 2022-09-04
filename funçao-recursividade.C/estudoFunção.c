#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//função e recursividade

float dobro (float n){
    return n * 2; 
}

int lerNumInteiro(){
    int num;

    do{

        printf("Digite um valor maior que 0 ");
        scanf("%d", &num);
    }while(num < 1);\
    return num;
    
}

int main(){
    int num1, num2, num3;
    num1= lerNumInteiro();
    num2= lerNumInteiro();
    num3= lerNumInteiro();

    printf("num1 %d\n num2 %d\n num3 %d\n", num1, num2, num3);
    return 0;
}

