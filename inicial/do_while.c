/*
https://www.udemy.com/course/aprende-programacion-con-ejercicios-en-lenguaje-c-parte-2
*/

#include <stdio.h>

#define PRECIO 10       // constante

int main(void){
    float litros;
    char respuesta;

    do{
        //
        printf("¿Cuántos litros desea? ");
        scanf("%f", &litros);
        printf("\nEl importe a pagar es: %.2f", litros * PRECIO);
        printf("\n¿Desea otro cálculo? (s = si / cualquier otra palabra para finalizar): ");
        scanf("%s", &respuesta);
    }while(respuesta == 's');   // expresión booleana

    return 0;
}