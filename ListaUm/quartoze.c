#include <stdio.h>

int main(void){

    float altura,area,baseMaior,baseMenor;

    printf("Insira o valor da base maior do trapezio: ");
    scanf("%f",&baseMaior);

    printf("Insira o valor da base menor do trapezio");
    scanf("%f",&baseMenor);

    printf("Insira o valor da altura do trapezio: ");
    scanf("%f",&altura);

    area = ((baseMaior+baseMenor)*altura)/2.0;

    printf("A area do trapezio é: %f",area);

    return 0;

}
