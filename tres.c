#include <stdio.h>


int main(void){

    float valor, gorjeta, valorTotal;

    printf("Insira o total Gasto: ");
    scanf("%f",&valor);

    gorjeta = valor * 0.1;

    valorTotal = valor + gorjeta;

    printf("\nValor Gasto: %.2f",valor);
    printf("\nValor Gorjeta: %.2f",gorjeta);
    printf("\nvalor Total: %0.2f",valorTotal);

    return 0;

}
    
