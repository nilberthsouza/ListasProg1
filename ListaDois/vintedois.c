#include <stdio.h>



int main(void){

    int nota;

    printf("insira a nota do aluno");
    scanf("%d",&nota);

    switch(nota){

        case 10:
            printf("conceito A");
            break;
        case 9:
            printf("Conceito A");
            break;
        case 8:
            printf("Conceito B");
            break;
        case 7:
            printf("Conceito B");
            break;
        case 6:
            printf("Conceito C");
            break;
        case 5:
            printf("Conceito C");
            break;
        case 4:
            printf("Conceito D");
            break;
        case 3:
            printf("Conceito D");
            break;
        case 2:
            printf("Conceito D");
            break;
        case 1:
            printf("Conceito D");
            break;
        case 0:
            printf("Conceito D");
            break;
        default:
            printf("Erro. Insira uma nota valida");

    }
    return 0;

}



