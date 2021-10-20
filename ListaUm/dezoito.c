#include <stdio.h>
#include <math.h>


int main(void){

    int aEne,razao,primeiroTermo, enezimo;

    printf("Insira um numero N :");
    scanf("%d", &enezimo);

    printf("Insira o primeiro termo: ");
    scanf("%d",&primeiroTermo);

    printf("Insira a razão :");
    scanf("%d",&razao);

    aEne = primeiroTermo * pow(razao,enezimo-1);

    printf("o enezimo termo desta P.G é : %d",aEne);

    return 0;

}
