#include <stdio.h>
#include <stdlib.h>

int i;
int ffatorial(int n){
    int f=1;
    while(n>=1){
        f=f*n;
        n--;
    }
    return f;
}

int main(){
    int num[10], fat[10];

    for(i = 0; i < 10; i++)
    {
        printf("Digite um numero ");
        scanf("%d", &num[i]);
    

        fat[i]=ffatorial(num[i]);
    }
    for(i=0; i<10; i++)
    printf("\nFatorial eh %d eh : %d", num [i],fat[i]);
    

    return 0;
}