/*
Introducción a punteros
https://youtu.be/4IabpaIObzM
*/

#include <stdio.h>
#include<stdlib.h>

int main(){
    int i = 10;
    
    int *p;
    p = &i;   // estas dos últimas líneas se podrían sustituir por esta única expresión: int *p = &i;

    system("clear");
    printf("\nEl valor de la variable i es: %d\n", i);
    printf("\nEl puntero apunta a la varialbe i que vale: %i\n", *p);
    printf("\nLa dirección a la que apunta el puntero p es:  %p\n", p);
    printf("\nes la misma que la dirección de la variable i: %p\n", &i);    
    printf("\nA su vez p tiene su propia dirección hexadecimal: %p\n", &p);

    return 0;
}

/* 
Operador referencia: &
Hace que el puntero apunte a una variable. Ejemplo:
    int i = 10;
    int *p = &i;
p apunta a la direcciónd de la variable i

Operador indirección: *
Permite acceder al valor que hay en la memoria a la que apunta
el puntero.
Ejemplo: printf("%d", *p);   // devuelve el valor de la variable a la que apunta p

*/