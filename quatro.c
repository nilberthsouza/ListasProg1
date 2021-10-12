#include <stdio.h>

int main(void){

    float salarioMinimo,salarioPessoa, quantSala;

    printf("insira o valor do salário mínimo: ");
    scanf("%f", &salarioMinimo);

    printf("Insira o salário de uma Pessoa");
    scanf("%f", &salarioPessoa);

    quantSala  = salarioPessoa/salarioMinimo;

    printf("Essa pessoa recebe %.3f salarios minimos", quantSala);

    return 0;

}
