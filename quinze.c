#include <stdio.h>
#include <math.h>

int main(void){

    double massaTerra = 5.9e+24;
    double G = 6.7e-11;
    double periodo,raio,velocidade;

    printf("Insira o raio da orbita circular do satelite");
    scanf("%lf",&raio);

    velocidade = sqrt(G*massaTerra/raio);

    periodo = 2 * M_PI * sqrt(pow(raio,3)/(G*massaTerra));

    printf("A velocidade escalar do satelite é: %e", velocidade);

    printf("\nA o periodo do movimento orbital é: %e",periodo);

    return 0;

}
