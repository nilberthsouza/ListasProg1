#include <stdio.h>


int main(void){

    float hUm,hDois;
    float dUm = 0.8;
    float dDois = 1.0;


    printf("Insira a altura da coluna de oleo (cm) : ");
    scanf("%f",&hUm);

    hDois = (hUm*dUm)/dDois;

    printf("A altura da coluna de agua em cm é: %f", hDois);

    return 0;

}
