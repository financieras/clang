/*  Cálculo del máximo y el mínimo
    Usando solo la función principal */

#include <stdio.h>
#include <stdlib.h>


int main(){
    int a[5] = {3,4,2,9,7};
    int n = 5;
    int min, max;
    min = max = a[0];

    system("clear");
    printf("\nMáximo: %d, mínimo; %d\n", max, min);
    
    return 0;
}