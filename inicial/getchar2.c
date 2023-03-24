/* 
Entrada y salida de datos
https://youtu.be/N_mNvTPH12o
*/

#include <stdio.h>

int main(){
    char frase[100];      // la variable frase es un array de chars
    gets(frase);          // recoje una frase con varios caracteres, espacios incluidos
    puts(frase);          // imprime la frase completa
}


/*

gets lanza un warning en linux:
aviso: the `gets' function is dangerous and should not be used.
pero deja usarlo.

se recomienda usar fgets

*/