/*
Punteros en C: introducción, primeras ideas
https://youtu.be/WNi82L_zvqc
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int edad=20, *apuntador;
    apuntador = &edad;

    system("clear");
    printf("\n\n***************** EDAD *****************");
    printf("\n%d", edad);         // imprimiendo directamente la variable edad
    printf("\n%d", *apuntador);   // imprimiendo la edad mediante el valor de la variable a la que apunta el apuntador

    printf("\n\n***************** DIRECCIONES *****************");
    printf("\n%p", &edad);          // Dirección de la variable edad
    printf("\n%p", apuntador);      // contenido de la variable apuntador
    printf("\n%p", &apuntador);     // a su vez la variable apuntador tienes su propia dirección
    printf("\n\n");

    return 0;
}