/*
https://youtu.be/o_a3MaR-lsg
*/

#include <stdio.h>
#include <stdlib.h>

struct S_fecha{
    int dia;
    int mes;
    int anio;
    char *nombre_mes;
 };

typedef struct S_fecha fecha;

int main(){
    fecha f1;

    f1.nombre_mes = (char*) malloc;

    f1.dia = 31;
    f1.mes = 3;
    f1.anio = 2023;
    f1.nombre_mes = "marzo";

    printf("El día %d de %s del año %d.\n", f1.dia, f1.nombre_mes, f1.anio);

    return 0;
}