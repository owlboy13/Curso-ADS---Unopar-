#include <stdio.h>

float calcular_salario_bruto(float x, float y){
    float salario_bruto;
    salario_bruto = x * y;
    return salario_bruto;
}

float calcular_desconto(float salario_bruto){
    float valor_desconto = salario_bruto * 0.09;
    return valor_desconto;
}

float calcular_salario_liquido(float salario_bruto, float valor_desconto){
    float salario_liquido = salario_bruto - valor_desconto;
    return salario_liquido;
}

int main(){
    float valor_hora;
    float hora_trabalho;

    printf("- Vamos Calcular o seu Salário -\n");

    // Entrada do valor da hora de trabalho
    do {
        printf("Informe o valor da sua hora de trabalho: ");
        scanf("%f", &valor_hora);
        if (valor_hora <= 0) {
            printf("Erro: O valor da hora de trabalho deve ser maior que zero.\n");
        }
    } while (valor_hora <= 0);

    // Entrada das horas trabalhadas
    do {
        printf("Informe as suas horas de trabalho: ");
        scanf("%f", &hora_trabalho);
        if (hora_trabalho <= 0) {
            printf("Erro: As horas de trabalho devem ser maior que zero.\n");
        }
    } while (hora_trabalho <= 0);

    float salario_bruto = calcular_salario_bruto(valor_hora, hora_trabalho);
    printf("O seu salario bruto: R$ %.2f\n", salario_bruto);

    float desconto_salario = calcular_desconto(salario_bruto);
    printf("O desconto de 9%%: R$ %.2f\n", desconto_salario);

    float salario_liquido = calcular_salario_liquido(salario_bruto, desconto_salario);
    printf("O seu salario liquido: R$ %.2f\n", salario_liquido);

    return 0;
}
