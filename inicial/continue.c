#include <stdio.h>

// Resuelto con un bucle while

int main(int argc, char const *argv[])
{
    int i = 0;
    while (i < 10)
    {
        i++;
        if (i % 2) continue;
        printf("El número %d es par\n", i);
    }
    return (0);
}




/*
// Resuelto con un bucle do...while

int main(int argc, char const *argv[])
{
	int i = 0;
    do
    {
    	i++;
    	if (i % 2) continue;
    	printf("El número %d es par\n", i);
    } while (i < 10);
    return (0);
}
*/




/*
// Resuelto con un bucle for

int main(int argc, char const *argv[])
 {
    for (int i=1; i<=10; i++)
    {
        if (i % 2) continue;
        printf("El número %d es par\n", i);
    }
    return (0);
}
*/