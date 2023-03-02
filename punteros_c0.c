/*
Punteros en C: introducción, primeras ideas
https://youtu.be/WNi82L_zvqc
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int edad=20;

    system("clear");
    
    printf("\nEdad: %d", edad);         // imprimiendo directamente la variable edad
    printf("\nDirección: %p", &edad);   // Dirección de la variable edad
    printf("\n\n");

    return 0;
}