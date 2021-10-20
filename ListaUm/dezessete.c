#include <stdio.h>

int main(void){

    int primeiroTermo,razao,enezimo,aene;

    printf("Insira o primeiro termo da PA :");
    scanf("%d", &primeiroTermo);

    printf("Insira a razão :");
    scanf("%d",&razao);

    printf("Insira o N-ézimo termo: ");
    scanf("%d",&enezimo);
    
    aene = primeiroTermo + (enezimo-1)*razao;

    printf("\nO enezimo termo da P.A é: %d",aene);

    return 0;

}


