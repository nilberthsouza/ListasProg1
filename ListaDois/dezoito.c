#include <stdio.h>


int main(void){

    int numUm,numDois;

    printf("Insira dois numeros inteiro menores que 10: ");
    scanf("%i %i",&numUm, &numDois);

    if(numUm+numDois < 8){
        printf("%i e %i são menores que oito. Portanto a média deles é: %f",numUm,numDois,(float)(numUm+numDois)/2);
    }
    else if(numUm+numDois == 8){
        printf("%i e %i são somados é oito. Portato o produto deles é: %i",numUm,numDois,numUm*numDois);
    }
    else{
        if(numUm >= numDois){
            printf("%i e %i são maiores que oito. Portanto a divisão do maior pelo menor é %f",numUm,numDois,(float)numUm/numDois);
        }
        else{
            printf("%i e %i são maiores que outo. Portanto a divisão do maior pelo menor é %f",numDois,numUm,(float)numDois/numUm);
        }}
    return 0;
}

