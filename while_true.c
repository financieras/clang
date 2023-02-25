/*
Uso de break en un bucle do while
https://youtu.be/vayOmTfPUOw
*/

#include <stdio.h>

int main(){
    int numero;
    do{
        printf("Introduzca un número positivo: ");
        scanf("%d", &numero);

        if(numero<=0){
            printf("ERROR: el número es menor o igual a cero.\n");
            break;
        }
        printf("El número es mayor que cero\n");
    } while (1);   // poner 1 equivale a true
    printf("Terminó el programa.");
    return 0;
}