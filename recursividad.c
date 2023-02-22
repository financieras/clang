/*
Factorial por recursividad
*/

#include <stdio.h>
long Factorial(long numero);   // prototipo

int main()
{
    int numero;
    printf("Ingrese un número: ");
    scanf("%i", &numero);
    for(int i=0; i<=numero; i++)
    {
        printf("El factorial de %i es %ld\n", i, Factorial(i));
    }
    return 0;
}

long Factorial(long numero)
{
    if(numero <= 1)
    {
        return 1;
    }else{
        return(numero * Factorial(numero-1));
    }
}