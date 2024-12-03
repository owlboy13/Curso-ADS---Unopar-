#include <stdio.h>

void main()
{
    int var = 10;
    int resultado = funcao(&var);
    printf("%d", resultado);

}

void funcao(int *n){
    *n = 20;
}