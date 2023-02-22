/*
Arrays
https://youtu.be/GOSOaNBqZaw
*/

#include <stdio.h>

int main()
{
    // CASO 1  ACCESO A UN ELEMENTO DE UN ARRAY
    int arr[4] = {10,20,30,40};
    printf("El valor de index 3 es: %i\n", arr[3]);

    // CASO 2 CREACIÓN E IMPRESION DE UN ARRAY
    int sizeA;
    printf("Indique el tamaño del array de edades: \n");
    scanf("%i", &sizeA);
    int age[sizeA];
    for(int i=0; i<sizeA; i++)
    {
        printf("Ingrese la edad del jugador número: %i\n", i+1);
        scanf("%i", &age[i]);
    }
    printf("Los valores introducidos son:\n");
    for(int i=0; i<sizeA; i++)
    {
        printf("%i ", age[i]);
    }
    printf("\n");
 
    // CASO 3 ARRAYS MULTIDIMIENSIONALES
    int multi[2][3] = {{1,2,3}, {10,20,30}};  // dos filas y tres columnas
    printf("El elemento del array multi es: %i\n", multi[0][1]);  //accedemos al elemento de index 1 de la fila de index 0
    return 0;
}