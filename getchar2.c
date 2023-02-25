/* 
Entrada y salida de datos
https://youtu.be/N_mNvTPH12o
*/

#include <stdio.h>

int main(){
    char frase[100];      // la variable frase es un array de chars
    gets(frase);      // espera con el cursor parpadeando hasta que se introduce un caracter
    puts(frase);         // imprime el caracter (solo se ha recogido el primer caractes en caso de haber escrito varios)
}