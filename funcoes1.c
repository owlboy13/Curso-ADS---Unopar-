#include <stdio.h>

int fatorial(int n){
    int res = 1;

    for(int i = n; i > 1; i--){
        res = res * i;
    
    }
    return res;
}

int main(){

    int numero;

    printf("Digite um numero inteiro e positivo:  ");
    scanf("%d", &numero);
    printf("Valor Fatorial: %d", fatorial(numero));


    return 0;
}