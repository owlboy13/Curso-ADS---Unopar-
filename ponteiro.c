#include <stdio.h>
#include <string.h>


int main(){

    int *ptr;
    int valor = 10;

    ptr = &valor;

    printf("Endereço = %x", &valor);
    printf("Endereço = %x", ptr);
    printf("Valor = %d", *ptr);

    return 0;
}