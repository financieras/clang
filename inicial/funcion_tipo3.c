/*
Cuatro tipos de funciones:
Tipo1: Con parámetros y con Return
Tipo2: Con parámetros y sin Return
Tipo3: Sin parámetros y con Return   (este caso)
Tipo4: Sin parámetros y sin Return
https://youtu.be/wtdLjQqe_Hk
*/

#include <stdio.h>
#include <stdlib.h>

/* PASO 1: 
Declaramos los propotipos de función
Es una función que NO recibe desde el main y
SI regresa hacia main el resultado de la suma y en el main se imprime */
int suma(void);
int main(){
    /* PASO 5:
    Como no tenemos parámetros no declaramos los números aquí,
    sin embargo tenemos tipo de retorno por lo tanto declaramos solamente
    la variable donde se guardará el valor de la suma y madamos llamar a la función */
    int res;
    system("clear");

    /* PASO 6: Invocamos la función */
    res = suma();

    /* PASO 7: Imprimimos el resultado obtenido */
    printf("\nEl resultado es: %d\n", res);

    return 0;
}

/* PASO 2:
Aquí codificamos la función suma
en este caso no tenemos parámetros por lo cual tenemos
que declarar variables locales dentro de la función */
int suma(void){
    /* PASO 3:  Declaramos las variables locales dentro de la función suma */
    int n1, n2;

    /* PASO 4:  Pedimos las variables locales */
    printf("\nIndique el primer número: ");
    scanf("%d", &n1);
    printf("\nIndique el segundo número: ");
    scanf("%d", &n2);
    
    /* PASO 5: Se retorna el resuldado hacia main */
    return n1 + n2;
}