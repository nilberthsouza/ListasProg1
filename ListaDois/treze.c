#include <stdio.h>


int main(void){

    float x,y;

    printf("insira dois numeros: ");
    scanf("%f %f",&x,&y);

    if(x > 0 && y > 0){
        
        printf("\n%f e %f pertencem ao primeiro quadrante",x,y);
        
    }
    else if(x < 0 && y > 0){

        
        printf("\n%f e %f pertencem ao segundo quadrante",x,y);

    }
    else if(x < 0 && y < 0){


        printf("\n%f e %f pertencem ao terceiro quadrante",x,y);
    }
    else{
        
        printf("\n%f e %f pertencem ao quarto quadrante",x,y);
       }

    return 0;

}
