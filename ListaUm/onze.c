#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){

    float ladoUm,ladoDois,hipotenusa,somaQuad;

    printf("Insira o tamanho de um dos lados do triangulo: ");
    scanf("%f",&ladoUm);

    printf("Insira o tamanho do outro lado do triangulo: ");
    scanf("%f",&ladoDois);
    
    somaQuad = pow(ladoUm,2)+pow(ladoDois,2);
    hipotenusa = sqrt(somaQuad);

    printf("\n A hipotenusa é: %f",hipotenusa);

    return 0;

}
