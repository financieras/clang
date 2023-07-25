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

int board[N][N];
int count = 0;

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

int solve(int col) {
    int i;
    if (col >= N) {
        for (i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if(board[i][j] == 1)
                    printf("%d", j);
            }
        }
        printf("$\n");
        count++;
        return 1;
    }
    for (i = 0; i < N; i++) {
        if (is_safe(i, col)) {
            board[i][col] = 1;
            solve(col + 1);
            board[i][col] = 0; // backtrack
        }
    }
    return 0;
}

int ft_ten_queens_puzzle(void) {
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            board[i][j] = 0;
    solve(0);
    return count;
}

int main() {
    printf("Total solutions: %d\n", ft_ten_queens_puzzle());
    return 0;
}
