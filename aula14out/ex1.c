#include <stdio.h>


int main(void){

    int numero;

    printf("Insira um numero: ");
    scanf("%d",&numero);

    if(numero >= 20 && numero <= 90){
        printf("numero compreendido no intervalo");

     }else{
         printf("numero não compreendido no intervalo");

     }
    return 0;

}
