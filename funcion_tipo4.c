/*
Cuatro tipos de funciones:
Tipo1: Con parámetros y con Return
Tipo2: Con parámetros y sin Return
Tipo3: Sin parámetros y con Return
Tipo4: Sin parámetros y sin Return   (este caso) "sin sin"
https://youtu.be/wtdLjQqe_Hk
*/

#include <stdio.h>
#include <stdlib.h>

/* PASO 1: 
Declaramos los propotipos de función
Es una función que NO recibe desde el main y tamposo regresa nada hacia el main
por lo tanto todo el código se realiza en la función y únicamente se manda llamar en el main. */
void suma(void);
int main(){
    system("clear");

    /* PASO 7: Invocamos la función */
    suma();

    return 0;
}

/* PASO 2:
Aquí codificamos la función suma
en este caso no tenemos parámetros por lo cual tenemos
que declarar variables locales dentro de la función */
void suma(void){
    /* PASO 3:  Declaramos las variables locales dentro de la función suma */
    int n1, n2, res;

    /* PASO 4:  Pedimos las variables locales */
    printf("\nIndique el primer número: ");
    scanf("%d", &n1);
    printf("\nIndique el segundo número: ");
    scanf("%d", &n2);

    /* PASO 5: Realizamos la suma */
    res = n1 + n2;
    
    /* PASO 6: Imprimimos el resultado */
    printf("\nEl resultado es: %d\n", res);
}