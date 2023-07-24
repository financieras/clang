/* Escribe una función recursiva que devuelva una potencia de un número.
Una potencia inferior a 0 devolverá 0.
No hay que gestionar los "int overflow", el retorno será indefinido.
Hemos decidido que 0 potencia 0 devolverá 1.
El prototipo de la función deberá ser el siguiente.
int ft_recursive_power(int nb, int power);
*/

#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main() {
    int base = 2;
    int exponente = 3;
    int resultado = ft_recursive_power(base, exponente);
    
    printf("%d elevado a %d es igual a %d\n", base, exponente, resultado);
    
    return 0;
}

int ft_recursive_power(int nb, int power) {
    if (power < 0) {
        return 0;
    } else if (power == 0) {
        return 1;
    } else {
        return nb * ft_recursive_power(nb, --power);
    }
}