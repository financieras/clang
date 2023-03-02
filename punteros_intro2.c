/*
Manipulación de punteros
Asignación entre punteros
https://youtu.be/4IabpaIObzM
*/

#include <stdio.h>
#include<stdlib.h>

int main(){

    int i, *p;  // inicializamos la variable i y el puntero p
    
    i = 10;     // asignamos un valor a la variable i
    
    p = &i;     // asignamos al puntero p la dirección de i

    int *q;     // inicializamos otro puntero
    q = p;      // igualamos q a p
                // el resultado es que ahora hay dos punteros
                // apuntando a la variable i
                // ahora podemos acceder al valor de i de tres formas:
                // - usando la propia variable i
                // - por el puntero p
                // - por el puntero q

    system("clear");
    printf("%d ", i);
    printf("%d ", *p);
    printf("%d \n", *q);

    *p = 20;     // modificamos el valor de la variable
                 // esto afecta a i, a p y a q. Todo queda afectado
            
    printf("%d ", i);
    printf("%d ", *p);
    printf("%d \n", *q);

    return 0;
}