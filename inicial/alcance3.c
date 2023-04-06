/*
Utilizando los valores de retorno de las funciones,
así evitamos utilizar variables globales.
https://youtu.be/234-9AqIr38
*/

#include <stdio.h>
int cambio(int);

int main(){
    int a = 10;
    printf("Valor original: %d\n", a);
    a = cambio(a);  // invocamos la función cambio y recogemos su valor retornado en la propia variable a
    printf("Valor modificado: %d\n", a);
    return 0;
}


int cambio(int a){ // recibimos el parámetro a  
    a++;
    printf("Valor en la función: %d\n", a);
    return a;       // retornamos el valor de a
}