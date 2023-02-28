/*
Arrays con límite estático de datos
Se declara el array con un tamaño máximo.
Ese tamaño nos le puede proporcionar el usuario o fijar en el código
Pero es estático, no varía de forma dinámica
https://youtu.be/5yQC7vipBFw
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int edad[50], i, ndatos;
    system("clear");  // en Windows es cls

    /* Pedimos al usuario el número de datos del array.
    Si el usuario nos da un nº negativo, cero o mayor a 50 entonces
    le pedimos nuevamente el número las veces que sea necesario.*/

    do{
        printf("Indique el nº de datos que desea guardar en el array (1-50): ");
        scanf("%d", &ndatos);
    } while (ndatos<=0 || ndatos>50);
    
    // Pedimos los datos
    system("clear");
    for (i=0; i<ndatos; i++){
        printf("Indique la edad con index %i: ", i);
        scanf("%i", &edad[i]);
    }


    // Imprimimos los datos
    for (i=0; i<ndatos; i++){
        printf("\nedad[%d] = %d", i, edad[i]);
    }
    printf("\n");
}