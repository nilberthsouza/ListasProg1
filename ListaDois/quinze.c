#include <stdio.h>

int main(void){

    float numUm,numDois;

    printf("Insira dois numero: ");
    scanf("%f %f",&numUm,&numDois);

    if(numUm <= numDois ){
       

        printf("%f - %f",numDois,numUm);
    }else{
        printf("%f - %f",numUm,numDois);
    }
    return 0;

}
