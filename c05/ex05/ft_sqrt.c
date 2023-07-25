/*
Escribe una función que devuelva la raíz cuadrada entera de un número, si existe, 
o 0 si la raiz cuadrada no es entera.
El prototipo de la función deberá ser el siguiente:
int ft_sqrt(int nb); 
*/

#include <stdio.h>

int ft_sqrt(int nb);

int main(void){
    int nb = 400;
    printf("La raiz cuadrada de %d es %d\n", nb, ft_sqrt(nb));
    return 0;
}

int ft_sqrt(int nb){
    if (nb < 0)
        return 0;
    int x = 0;
    while (x * x <= nb){
        if (x * x == nb)
            return x;
        x++; 
    }
    return 0;
}