#include <stdio.h>


int main(void){
    int numUm, numDois,soma, sub, multi,div;

    printf("Digite o número 1:\n");
    scanf("%i", &numUm);

    printf("\nDigite o numero 2:\n");
    scanf("%i", &numDois);

    soma = numUm + numDois;
    sub = numUm - numDois;
    multi = numUm * numDois;
    div = numUm / numDois;

    printf("%i + %i = %i",numUm,numDois,soma);
    printf("\n%i - %i = %i",numUm,numDois,sub);
    printf("\n%i * %i = %i",numUm, numDois, multi);
    printf("\n%i / %i = %i",numUm, numDois, div);

    return 0;

}
    

   
    
