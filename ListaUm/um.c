#include <stdio.h>


int main(){

    int inteiro;

    printf("Numero inteiro: ");
    scanf("%i", &inteiro);

    printf("Antecessor: %i\n",inteiro-1);
    printf("Sucessor: %i\n", inteiro+1);

    return 0;

}
