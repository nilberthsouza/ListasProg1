#include <stdio.h>
#include <math.h>


int main(void){

    float altura, comprimento, area,perimetro;
    printf("insira a altura do retangulo: ");
    scanf("%f",&altura);

    printf("insira o comprimento do retangulo");
    scanf("%f",&comprimento);

    area = altura * comprimento;

    perimetro = 2*altura + 2*comprimento;

    printf("A area do retangulo é: %f",area);
    printf("\nO perimetro do retangulo é: %f",perimetro);

    return 0;

}
