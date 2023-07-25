/*
Escribe una función que devuelva 1 si el número es primo y 0 si el número no lo es.
El prototipo de la función deberá ser el siguiente:
int ft_is_prime(int nb);
*/

#include <stdio.h>
#include <math.h>

int ft_is_prime(int nb);

int main(void){
    int nb = 101;
    int result = ft_is_prime(nb);
    if (result == 1){
        printf("El número %d SI es primo\n", nb);
    } else {
        printf("El número %d NO es primo\n", nb);
    }
}

int ft_is_prime(int nb){
    if (nb == 2)
        return 1;
    else if (nb > 2){
        int i = 3;
        //while (i <= (sqrt(nb))+1){
        while (i * i <= nb){
            if (nb % i == 0)
                return 0;
            i += 2;
        }
        return 1;
    }
    return 0;
}