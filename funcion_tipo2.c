/*
Cuatro tipos de funciones:
Tipo1: Con parámetros y con Return
Tipo2: Con parámetros y sin Return   (este caso)
Tipo3: Sin parámetros y con Return
Tipo4: Sin parámetros y sin Return
https://youtu.be/wtdLjQqe_Hk
*/

#include <stdio.h>
#include <stdlib.h>

/* PASO 1: 
Declaramos los propotipos de función
Es una función que recibe desde main 2 valores enteros y
NO regresa hacia main el resultado sino que directamente imprime
el resultado de la suma de esos valores */
void suma(int, int);
int main(){
    /* PASO 4:
    Declaramos las variables que vamos a mandar como parámetros,
    en este caso no declaramos ninguna variable que reciba la suma
    porque la función es de tipo 2, sin Return */
    int n1, n2;
    system("clear");

    /* PASO 5: Pedimos los datos */
    printf("\nIndique el primer número: ");
    scanf("%d", &n1);
    printf("\nIndique el segundo número: ");
    scanf("%d", &n2);

    /*PASO 6: Invocamos la función*/
    suma(n1, n2);

    // Ahora aquí no se imprime el resultado

    return 0;
}

/* PASO 2:
Aquí codificamos la función suma
también colocamos el nombre de nuestros parámetros que son
las variables que se mandan desde main */
void suma(int n1, int n2){
    /* PASO 3: Calculamos e imprimimos el resultado */
    int res = n1 + n2;
    printf("\nEl resultado es: %d\n", res);
    
    // no hay retun
}