#include <stdio.h>
#include <math.h>

#define MASSATERRA  5.9e+24
#define G  6.7e-11

int main(void){

    double periodo,raio,velocidade;

    #ifdef MASSATERRA
    
    printf("Insira o raio da orbita circular do satelite");
    scanf("%lf",&raio);

    velocidade = sqrt(G*MASSATERRA/raio);

    periodo = 2 * M_PI * sqrt(pow(raio,3)/(G*MASSATERRA));

    printf("A velocidade escalar do satelite é: %e", velocidade);

    printf("\nA o periodo do movimento orbital é: %e",periodo);

    #else
    printf("Massa Terra não definida");

    #endif
    

    return 0;

}
