/*
Funciones básicas
https://youtu.be/-zNyti2wZ0s
*/

#include <stdio.h>

void saluda()   // void se pone cuando no se retorna nada
{
    printf("Hola desde C\n");
    return;   // si no se pone no da error pero lo adecuado es terminar la función con return
}


int main()
{
    saluda();   // invocamos la función saluda
    return 0;
}