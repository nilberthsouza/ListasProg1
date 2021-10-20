#include <stdio.h>


int main(void){

    float montante, meses,taxa,juros,capital;


    printf("\nInsira o montate total: ");
    scanf("%f",&montante);

    printf("\nInsira o total de meses");
    scanf("%f",&meses);

    printf("\ninforme a taxa de juros; Ex: 20%c",'%');

    scanf("%f",&taxa);

    taxa = taxa/100.0;

    juros = montante*meses*taxa;
    capital = montante + juros;
    printf("\nTotal investido %.2f",montante);
    printf("\nmontante final %.2f",capital);
    printf("\nvalor total de juros %.2f",juros);

    return 0;

}
