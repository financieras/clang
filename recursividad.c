/*
Factorial por recursividad
https://youtu.be/gwHbGOyjGmo
https://www.youtube.com/playlist?list=PLpOqH6AE0tNgqknxjMAJ8bX_L1a7lnBaH
*/

#include <stdio.h>
long Factorial(long numero);   // prototipo de función

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