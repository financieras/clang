/*
https://www.w3schools.blog/c-fgets-and-puts
*/


#include <stdio.h>

int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // display string y al final mete un \n
    return 0;
}