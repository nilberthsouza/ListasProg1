#include <stdio.h>

int main(void){

    int numUm, numDois;
    char a[1];
    float resultado;

    printf("Digite a operação por exemple 2x3");
    scanf("%d %c %d",&numUm,a,&numDois);


    if (a[0] == '+'){
        resultado = numUm + numDois;
    }else{
        if(a[0] == '-'){
            resultado = numUm - numDois;
        
        }else{
            if (a[0] == 'x'){
                resultado = numUm * numDois;
            }
            else{
                resultado = (numUm) / (float)(numDois);

            }

        }

}

printf("resultado é: %.2f",resultado);

return 0;

}
   
