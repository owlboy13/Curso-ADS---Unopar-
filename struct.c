#include <stdio.h>
#include <string.h>

struct Cadastro {
    char nome[30];
    int idade;
    char rua[50];
    int numero;
};

int main(){
    struct Cadastro c1;
    printf("Insira os dados\n");
    printf("Nome:");
    scanf("%s", &c1.nome);
    printf("Idade:");
    scanf("%d", &c1.idade);
    printf("Primeiro Cadastro: \n%s", c1.nome);
    printf("\n%d",c1.idade);

    return 0;
}