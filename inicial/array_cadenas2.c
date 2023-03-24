/*
Cuenta el número de letras a en una cadena
Cuenta un caracter específio en una cadena
https://youtu.be/t5BeUQgcocM
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>   // para el tratamiento de cadenas

int main(){
    char cadena[50];
    int contador=0, i=0;
    system("clear");
    fflush(stdin);   // limpia el buffer de datos
    printf("\nPrograma que cuenta el número de letras A en una cadena");
    printf("\nIndique la cadena: ");
    fgets(cadena, 50, stdin);
    while (cadena[i] != '\0'){
        if (cadena[i] == 'a' || cadena[i] == 'A')
            contador ++;
        
        i++;
    }

    printf("\nLa cadena %s contiene %d letras A.\n", cadena, contador);
    
    return 0;
}