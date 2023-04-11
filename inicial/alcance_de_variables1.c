/*
Variables locales:
la variable dentro de una función tiene un alcance local
https://youtu.be/234-9AqIr38
*/

#include <stdio.h>
void cambio(int);

int main(){
    a = 10;
    printf("Valor original: %d\n", a);
    cambio();
    printf("Valor modificado: %d\n", a);
    return 0;
}