#include <stdio.h>


int main(void){

    float valor, fahrenheit,celsius;
    char unidade;


    printf("Indique a unidade de medida e valor da temperatura Ex. C 35 ou F 76 : ");
    scanf("%c %f",&unidade,&valor);

    switch(unidade){

        case 'C':
            fahrenheit = (valor * 9.0/5.0) + 32;
            printf("\n%.2f graus são %.2f fahrenheit's",valor,fahrenheit);
            break;

    case 'c':
            fahrenheit = (valor * 9.0/5.0) + 32;
            printf("\n%.2f graus são %.2f fahrenheit's",valor,fahrenheit);
            break;
        case 'F':
            celsius = 5.0/9.0 * (valor - 32);
            printf("\n %.2f  farenheit  %.2f celsius",valor,celsius);
            
            break;

            
        case 'f':
            celsius = 5.0/9.0 * (valor - 32);
            printf("\n %.2f farenheit é %.2f celsius",valor,celsius);
            break;
        default:
            printf("Erro, por favor tente novamente");
    }
    return 0;

}
