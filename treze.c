#include <stdio.h>
#include <math.h>


int main(void){

    float raio, comprimento, area, volume;

    printf("insira o raio: ");
    scanf("%f",&raio);


    comprimento = 2 * M_PI * raio;
    area = 4 * M_PI * pow(raio,2);
    volume = 4.0f/3.0f * M_PI * pow(raio,3);

    printf("\nO comprimento :%f",comprimento);

    printf("\nA area é :%f", area);
    printf("\nO volume é:%f", volume);

    return 0;

 }
