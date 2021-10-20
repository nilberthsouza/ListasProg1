#include <stdio.h>

int main(void){

    int a;
    int b;
    printf("Entre com valor de A:");
    scanf("%i",&a);
    printf("Entre com o valor de B:");
    scanf("%i",&b);

    printf("\nAntes da troca A = %i, B = %i\n", a, b);


    a = a+b;
    b = a - b;
    a = a -b;;
    
    printf("\nApós a troca A = %i, B = %i\n",a, b);

    return 0;

}



