/*
Ejemplo del uso de break y continue en un bucle For
*/

#include <stdio.h>

int main()
{
    // CASO 1 un for normalito
    for(int num=0; num<=9; num++)
    {
        printf("%i ", num);
    }
    printf("\n");


    // CASO 2 un for con un break
    for(int num=0; num<=9; num++)
    {
        if(num==4)
        {
            break;
        }
        printf("%i ", num);
    }
    printf("\n");


    // CASO 3 un for con un continue
    for(int num=0; num<=9; num++)
    {
         if(num%2)
         {
            continue;   // si num es impar se lo salta y no lo imprime
         }
        printf("%i ", num);
    }
    printf("\n");


    // CASO 4 un for con un break y un continue
    for(int num=0; num<=9; num++)
    {
        if(num%2)
        {
            continue;   // si num es impar se lo salta y no lo imprime
        }
        else if(num==6)
        {
            break;      // si num es 6 interrumpe el bucle for 
        }
        printf("%i ", num);
    }
    printf("\n");

    return 0;
}