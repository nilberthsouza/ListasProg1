#include <stdio.h>


int main(void){

    char operador;
    float numUm,numDois;

    printf("Insira um caracterere(+,-,/,x) e dois numeros: ");
    scanf("%c %f %f",&operador,&numUm,&numDois);


    switch(operador){
    case '+':
        printf("%.2f + %.2f = %.2f",numUm,numDois,numUm+numDois);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f",numUm,numDois,numUm-numDois);
        break;
    case 'x':
        printf("%.2f x %.2f = %.2f",numUm,numDois,numUm*numDois);
        break;
    case '/':
        if (numDois != 0){
        printf("%.2f / %.2f = %.2f",numUm,numDois,numUm/numDois);
        }else{
            printf("Divisão por zero não é possivel");
        }
        break;
    default:
        printf("Houve algum erro. Por favor tente novamente");
        
    }
        return 0;
    }
