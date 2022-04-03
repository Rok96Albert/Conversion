#include <stdio.h>

int main(){

    int dia;
    int horas;
    int min;

    int seg = 0;

    printf("Dia:");

    scanf("%i",&dia);
    
    printf("hora:");

    scanf("%i",&horas);

    printf("Minutos:");

    scanf("%i",&min);

    seg = (((dia*24)*3600)+(horas*3600)+(min*60));

    printf("%i dia, %i horas, %i minutos son:%i",dia,horas,min,seg);
}