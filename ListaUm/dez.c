#include <stdio.h>
#include <math.h>

int main(void){

    double x1,y1,x2,y2,c21,d21,dist;

    printf("Insira a coordernada X do ponto 1");
    scanf("%lf",&x1);
    printf("Insira a coordernada Y do ponto 1");
    scanf("%lf",&y1);

    printf("Insira a coordernada X do ponto 2");
    scanf("%lf",&x2);
    printf("Insira a coordernada Y do ponto 2");
    scanf("%lf",&y2);
    

    c21 = x2 - x1;
    d21 = y2- y1;

    dist = sqrt(pow(c21,2) + pow(d21,2));

    printf("A distancia entre os pontos é %lf",dist);

    return 0;
}

