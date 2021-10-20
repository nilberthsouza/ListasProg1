#include <stdio.h>


int main(void){

    float num,intervaloInferior,intervaloSuperior;

    printf(" Insira um intervalo. Ex:  -50  +50");
    scanf("%f %f",&intervaloInferior, &intervaloSuperior);
    
    printf("Algo insira um numero qualquer: ");
    scanf("%f",&num);

    if(num >= intervaloInferior && num <= intervaloSuperior){
        
        printf("O numero %f está compreendido no intervalo %f - %f ",num,intervaloInferior,intervaloSuperior);
    }
    else{
        printf("O numero %f não está compreendido no intervalo %f - %f",num,intervaloInferior,intervaloSuperior);

    }
    return 0;

}
