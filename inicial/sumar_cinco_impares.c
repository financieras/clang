/*
https://www.udemy.com/course/aprende-programacion-con-ejercicios-en-lenguaje-c-parte-2
*/

#include <stdio.h>

int main(){
    int suma=0, num, cont = 0;
    do{
        printf("Introduzca un número impar: ");
        scanf("%d", &num);
        if num % 2{
            suma += num;
            cont += 1
        }else{
            printf("Este número es par, intente otro.")
        }
    }while(cont<5);
}