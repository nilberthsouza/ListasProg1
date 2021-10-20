#include <stdio.h>


int main(void){
    
    float num;

    printf("insira um numero: ");
    scanf("%f",&num);

    if(num > 0){
        printf("O numero %f é positivo",num);
    }
    else if(num < 0){
        printf("O numero %f é negativo",num);
    }
    else{
        printf("O numero %.0f é neutro",num);
    }

    return 0;
}
