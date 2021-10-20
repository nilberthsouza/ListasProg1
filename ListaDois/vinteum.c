#include <stdio.h>


int main(void){

    int num;

    printf("insira o codigo do funcionario");
    scanf("%d",&num);

    switch(num){
        case 101:
            printf("Vendedor");
            break;
        case 102:
            printf("Atendente");
            break;
        case 103:
            printf("Auxiliar Tecnico");
            break;
        case 104:
            printf("Assistente");
            break;
        case 105:
            printf("Coordenador de Grupo");
            break;
        case 106:
            printf("Gerente");
            break;
        default:
            printf("Codigo invalido. Por favor tente novamente");
    } 
    return 0;
}

