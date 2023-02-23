/*
Funciones de retorno
https://youtu.be/pHzaGplT-xk
*/

#include <stdio.h>

int suma();

int main()
{
    int num1, num2;
    printf("Ingrese el primer valor: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &num2);

    printf("La suma es: %i\n", suma(num1, num2));   // invocamos la función suma pasándole dos argumentos
    return 0;
}

int suma(int num1, int num2)   // la función suma tiene ahora dos parámetros
{
    int s = num1 + num2;
    return s;    // retornamos la variable local s
}
