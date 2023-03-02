/*
Punteros en C: introducción, primeras ideas
https://youtu.be/WNi82L_zvqc
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    // Declaramos un puntero, el asterisco indica que la variable es un puntero y
    // por tanto necesita la dirección de una variable
    int *ericka;   // el puntero es de tipo entero y necesariamente la variable a la que apunta
                  // ha de ser de tipo entero

    int magda=20;

    // Inicializamos nuestro puntero para indicarle hacia que dirección de memoria de la variable
    ericka = &magda;    // El símbolo & significa "dirección de"
                        // después de esta línea erika ya puede acceder al dato de magna
    system("clear");
    printf("\n\n***************** DATOS DE MAGDA *****************");
    printf("\nLa edad de Magda es: %d", magda);
    printf("\nLa dirección de la casa de Magda es: %p\n\n", &magda);

    printf("\n\n***************** DATOS DE ERIKA *****************");
    // Para imprimir el valor con el puntero se usa *
    printf("\nLa edad de Magda que tiene Ericka es: %d", *ericka);
    // Para imprimir la dirección hacia la cual apunta se pone el nombre del puntero
    printf("\nLa dirección de la casa d Magda que tiene Ericka es: %p", ericka);
    // Para imprimir la dirección propia del puntero se usa &
    printf("\nLa dirección de la casa de Ericka es: %p\n\n", &ericka);

    return 0;
}