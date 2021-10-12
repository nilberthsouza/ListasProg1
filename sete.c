#include <stdio.h>


int main(void){

    float celsius,fahrenheit;

    printf("Insira a temperatura em celsius:");
    scanf("%f",&celsius);

    fahrenheit = (celsius * 9/5) + 32;;

    printf("\n%0.2f graus são %0.2f fahrenheit's",celsius,fahrenheit);

    return 0;
}
