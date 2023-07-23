// Escribe una función recursiva que devuelva el factorial de un número usando como parámetro.
// Si el argumento no es válido, la función debe devolver 0.
// No hay que gestionar los "int overflow", el retorno de la función será idefinido.
// El prototipo de la función deberá ser el siguiente:
// int ft_recursive_factorial(int nb);

#include <stdio.h>

int ft_recursive_factorial(int nb) {
    // Verificar si el argumento es válido
    if (nb < 0) {
        return 0;
    }

    // Caso base: factorial de 0 es 1
    if (nb == 0) {
        return 1;
    }

    // Llamada recursiva para calcular el factorial
    return nb * ft_recursive_factorial(nb - 1);
}

int main() {
    int num = 5;
    int result = ft_recursive_factorial(num);
    printf("El factorial de %d es: %d\n", num, result);

    return 0;
}
