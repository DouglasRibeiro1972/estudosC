#include <stdio.h>
#include <stdlib.h>

int main(){
    float sal, emprest;

    printf("Digite o valor do salario");
    scanf("%f", &sal);

    printf("Digite o valor do emprestimo ");
    scanf("%f", &emprest);

    if(emprest > (sal*0.20))
    {

        printf("emprestimo não concedido");
    }else{
        printf("Emprestimo concedido");
    }

    
    return 0;
}


