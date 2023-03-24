/*
Veamos el uso de break y continue en un ciclo while
https://www.youtube.com/watch?v=6JztT-0l4Vo&list=PLpOqH6AE0tNgqknxjMAJ8bX_L1a7lnBaH&index=15&ab_channel=codigofacilito
*/

#include <stdio.h>

int main()
{
    // int num = 0;
    // while(num <= 7)
    // {
    //     if(num>5)
    //     {
    //         break;
    //     }
    //     printf("%i ", num);
    //     num++;
    // }
    // printf("\n\n");

    int num = 0;
    while(num <= 7)
    {
        num++;   // IMPORTANTE: si se incrementa el contador después del continue se queda en un bucle sin fin
        if(num == 2)
        {
            continue;  // así evitamos que se imprima el 2
        }
        printf("%i ", num);
    }
    printf("\n\n");

    return 0;
}