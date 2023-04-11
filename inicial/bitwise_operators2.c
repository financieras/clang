/*
https://www.programiz.com/c-programming/bitwise-operators
*/

#include <stdio.h>

int main() {

    int a = 12, b = 25;
    printf("Output = %d\n", a & b);
	if ((a&b)==8){						// muy importante poner entre paréntesis (a&b)
		printf("8 es 8\n");
	}

    return 0;
}
