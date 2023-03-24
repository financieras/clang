/*
Arrays de cadenas
https://youtu.be/t5BeUQgcocM
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>   // para el tratamiento de cadenas

int main(){
    char nombre[50], paterno[50], materno[50];
    system("clear");
    fflush(stdin);   // limpia el buffer de datos
    printf("\nIndique su nombre: ");
    fgets(nombre, 50, stdin);
    printf("\nIndique su apellido paterno: ");
    fgets(paterno, 50, stdin);
    printf("\nIndique su apellido materno: ");
    fgets(materno, 50, stdin);
    printf("\nBienvenido "); puts(nombre);
    printf("Tu apellido paterno es "); puts(paterno);
    printf("Tu apellido materno es "); puts(materno);
    return 0;
}