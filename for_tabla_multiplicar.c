/*
Ciclo For
https://youtu.be/vayOmTfPUOw
*/

#include <stdio.h>

int main(){
    int numero, tabla = 5, resultado;

    for(numero=1; numero<=10; numero++){
        resultado = numero * tabla;
        printf("%d * %d = %d\n", numero, tabla, resultado);
    }
}