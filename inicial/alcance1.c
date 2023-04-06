/*
Variables locales
Pasamos la variable a por valor de la función main a la función cambio
Las dos variables se llaman a pero son diferentes, 
cada una de ellas tiene un ámbito local que solo afecta a su función.
https://youtu.be/234-9AqIr38
*/

#include <stdio.h>
void cambio(int a);

int main(){
    int a = 10;     // a es una variable local  y en main vale 10
    printf("Valor original: %d\n", a);
    cambio(a);
    printf("Valor modificado: %d\n", a);
    return 0;
}



void cambio(int a){ // paso del parámetro a por valor
    a++;            // a es una variable local  y en la función vale 11 pero fuero no
    printf("Valor en la función: %d\n", a);
}