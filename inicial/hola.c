#include <stdio.h>

int main(void){
    printf("¡¡Hola mundo mundial!!\n");
    return 0;
}

/* Primero compilar creando el binario ejecutable hola
   Se puede compilar así gcc hola.c -o hola
   Finalmente ejecutar ponendo ./hola     */

/* Para compilar y ejecutar en una sola línea:
gcc filename.c && ./a.out
Si se usa && el segundo comando solo se ejecuta si el primero ha tenido éxito.
En lugar de && se puede usar ; y en ese caso se ejecutan siempre los dos comandos.
 */