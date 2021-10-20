#include <stdio.h>


int main(void){
    
    int num;

    printf("Insira um numero: ");
    scanf("%d",&num);

    if((num % 2) ==  0){
        printf("O numero %d é um numero par: ",num);
    }else{
        printf(" O numero %d é um numero impar: ",num);
    }
    return 0;

}

