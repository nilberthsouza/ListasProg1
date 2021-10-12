#include <stdio.h>


int main(void){

    float valorProduto;
    float valorDesconto = 0.09;

    printf("Insira o Valor de um produto: ");
    scanf("%f",&valorProduto);

    valorProduto = valorProduto - (valorProduto * valorDesconto);

    printf("O valor do produto com desconto de 9%c é %.2f",'%',valorProduto);

    return 0;
}


