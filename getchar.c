/* 
Entrada y salida de datos
https://youtu.be/N_mNvTPH12o
*/

#include <stdio.h>

void main(){
    char letra;
    letra = getchar();      // espera con el cursor parpadeando hasta que se introduce un caracter
    putchar(letra);         // imprime el caracter
}

/*
En algunas terminales:
Si ejecutamos desde una terminal es posible que al terminar de ejecutarse se cierre la terminal.
Para evitar esto se puede usar una librería y al final, dentro del mai, poner la pausa, así:
#include <stdlib.h>
system("pause");
*/