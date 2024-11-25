#include <stdio.h>

int main()
{
    int numero = 0;
    int soma = 0;
    
    printf("Digite números inteiros e 0 para encerrar. \n");
    printf("Digite um número:");
    scanf("%d", &numero);
    if (numero < 0) { // se o número inserido for menor que zero 
        printf("Tente novamente, número inválido. \n");
        printf("Digite um número: ");
        scanf("%d", &numero);
        
    }
    
    while (numero != 0) { // loop de interação com usuario
        if (numero < 0) {
            printf("Tente novamente, número inválido. \n");
            printf("Digite outro número: ");
            scanf("%d", &numero);
        }
        soma += numero; 
        printf("Digite outro número: ");
        scanf("%d", &numero);
    }
    
    printf("Valor dos números somados: %d\n", soma); 
    
    return 0;
}