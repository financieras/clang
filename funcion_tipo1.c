/*
Cuatro tipos de funciones:
Tipo1: Con parámetros y con Return   (este caso)
Tipo2: Con parámetros y sin Return
Tipo3: Sin parámetros y con Return
Tipo4: Sin parámetros y sin Return
https://youtu.be/wtdLjQqe_Hk
*/

#include <stdio.h>
#include <stdlib.h>

/* PASO 1: 
Declaramos los propotipos de función
Es una función que recibe desde main 2 valores enteros y
regresa hacia main el resultado de la suma de esos valores */
int suma(int, int);
int main(){
    /* PASO 5:
    Declaramos las variables que vamos a mandar como parámetros
    y la variable que va a guardar el resultado de la suma*/
    int n1, n2, res;
    system("clear");

    /* PASO 6: Pedimos los datos */
    printf("\nIndique el primer número: ");
    scanf("%d", &n1);
    printf("\nIndique el segundo número: ");
    scanf("%d", &n2);

    /*PASO 7: Invocamos la función*/
    res = suma(n1, n2);

    /* PASO 8: Imprimimos el resultado obtenido */
    printf("\nEl resultado es: %d\n", res);

    return 0;
}

/* PASO 2:
Aquí codificamos la función suma
también colocamos el nombre de nuestros parámetros que son
las variables que se mandan desde main */
int suma(int n1, int n2){
    /* PASO 3:  aquí va el código de la función */
    int res = n1 + n2;   // res es una variable local distinta de la variable res que pudiera existir en main
    /* PASO 4: Se retorna el resuldado hacia main */
    return res;
}