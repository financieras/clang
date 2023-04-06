/*
Variable global
Se declara fuera de las funciones.
Tiene un alcance global y afecta a todas las funciones.
No es aconsejable utilizar variables globales
porque se puede perder el control de ellas.
Lo aconsejable es utilizar los valores de retorno de las funciones.
https://youtu.be/234-9AqIr38
*/

#include <stdio.h>
void cambio();

int a;      // variable global

int main(){
    a = 10;
    printf("Valor original: %d\n", a);
    cambio();
    printf("Valor modificado: %d\n", a);
    return 0;
}


void cambio(){      // no hay parámetro  
    a++;
    printf("Valor en la función: %d\n", a);
}