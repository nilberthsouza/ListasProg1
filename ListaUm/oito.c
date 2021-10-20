#include <stdio.h>

int main(){

    float tempFah, tempCel;

    printf("Insira a temperatura em fahrenheit ");
    scanf("%f",&tempFah);

    tempCel = 5.0/9.0 * (tempFah - 32);

    printf("\n A temperatura em Celsius é: %0.2f graus\n",tempCel);

    return 0;

}
