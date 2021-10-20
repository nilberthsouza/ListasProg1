#include <stdio.h>


int main(void){

    float a,b,c;

    printf("insira três numero: ");
    scanf("%f %f %f",&a,&b,&c);

    if(a > b && a > c){
        printf("o %f é o maior comparado a  %f e %f",a,b,c);
    }
    else if(b > a && b > c){
        printf("O %f é o maior comparado a  %f e %f",b,a,c);
    }
    else{
        printf("O %f é o maior comparado a  %f e %f",c,a,b);
    }
} 
