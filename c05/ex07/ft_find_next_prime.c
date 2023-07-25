/*
Escribe una función que devuelva el número primo 
inmediatamente superior o igual al número usado 
como parámetro.
El prototipo de la función debiera ser el siguiente:
int ft_find_next_prime(int nb);
*/

#include <stdio.h>

int ft_is_prime(int nb) {
    if (nb <= 1)
        return 0;
    
    for (int i = 2; i * i <= nb; i++) {
        if (nb % i == 0)
            return 0;
    }
    
    return 1;
}

int ft_find_next_prime(int nb) {
    while (!ft_is_prime(nb))
        nb++;
    
    return nb;
}

int main() {
    int num = 20;
    
    int nextPrime = ft_find_next_prime(num);
    printf("El siguiente número primo mayor o igual a %d es %d.\n", num, nextPrime);
    
    return 0;
}