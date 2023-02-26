/*
Diferencia entre scanf y gets
scanf recoge un string de una palabra sin espacio
gets aguanta espacios
https://youtu.be/4PdRjWsOUlI
*/

#include <stdio.h>

int main(){
    char nombre[50];
    printf("Indique su nombre: ");
    scanf("%s", nombre);  // scanf solo lee hasta que encuentra un espacio
    printf("Bienvenido %s\n", nombre);


    // cuando queremos leer nombre y apellido separado por un espacio,
    // no usaremos scanf sino gets

    char nombreyapellido[50];
    printf("Indique su nombre y apellido: ");
    scanf("%*c%[^\n]", nombreyapellido);      // con este truco se consigue que scanf lea todo, incluso espacios
    printf("Bienvenido %s\n", nombreyapellido);

    return 0;
}