//https://solarianprogrammer.com/2017/11/20/eight-queens-puzzle-python/
//https://codeahoy.com/learn/recursion/ch10/

/*
Escribe una función que muestre todas las posibilidades
de colocar diez damas en un tablero 10x10 sin que
se pueda alcanzar con una sola jugada y que devuelva
el número de posibilidades.
Se tendrá que utilizar recursividad.
El valor retornado por su función tendrá que ser 
el número de soluciones mostradas.
El prototipo de la función deberá ser el siguiente:
int ft_ten_queens_puzzle(void);
La visualización se hará de la manera siguiente:

0257948136$
0258693147$
...
4605713829$
4609582731$
...
9742051863$
*/

#include <stdio.h>

#define N 10

// Variables globales
int board[N][N];        // tablero de dimensión NxN
int count = 0;          // contador de soluciones

// Función que verifica si es seguro colocar una dama en una posición
// Comprueba que no hay otra dama en su fila o diagonales
// No comprueba que haya otra dama en su misma columna pero esto 
// se garantiza por la forma en que se llama a la función en 'solve'
int is_safe(int row, int col) {
    int i, j;
    for (i = 0; i < col; i++)
        if (board[row][i])
            return 0;
    for (i=row, j=col; i>=0 && j>=0; i--, j--)
        if (board[i][j])
            return 0;
    for (i=row, j=col; j>=0 && i<N; i++, j--)
        if (board[i][j])
            return 0;
    return 1;
}


// La función solve comienza con la primera columna y recursivamente intenta colocar una reina en cada fila de esa columna.
// Si se puede colocar una reina, pasa a la siguiente columna. 
//Si todas las reinas se colocan con éxito, imprime la solución e incrementa la variable count


int solve(int col) {
    int i;
    if (col >= N) {
        for (i = 0; i < N; i++) {           // se itera sobre las filas
            for (int j = 0; j < N; j++) {
                if(board[i][j] == 1)        // 1 representa una celda con dama
                    printf("%d", j);        // j es la columna de una dama válida
            }
        }
        printf("$\n");
        count++;
        return 1;
    }
    for (i = 0; i < N; i++) {
        if (is_safe(i, col)) {
            board[i][col] = 1;      // 1 representa una celda con dama
            solve(col + 1);         // llamada recursiva para las columnas restantes
            board[i][col] = 0;      // backtrack
        }
    }
    return 0;
}

int ft_ten_queens_puzzle(void) {
    int i, j;                       // se inicializa el tablero de ajedrez
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            board[i][j] = 0;        // 0 representa una celda vacía
    solve(0);                       // se llama a la función que lo resuelve comenzando en col=0
    return count;
}

int main() {
    printf("Total solutions: %d\n", ft_ten_queens_puzzle());
    return 0;
}
