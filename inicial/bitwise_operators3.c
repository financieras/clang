/*
https://www.hackerrank.com/challenges/bitwise-operators-in-c
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  
  /*
  int max_and=0, max_or=0, max_xor=0;
  for (int i=1; i<=n; i++){
    for (int j=i+1; j<=n; j++){
      printf("Fuera... i: %d j: %d i&j: %d max_and: %d\n", i, j, i&j, max_and);
      if ((i&j>max_and) && (i&j<k)){
        max_and=i&j;
        printf("Dentro.. i: %d j: %d i&j: %d max_and: %d\n", i, j, i&j, max_and);
        } 
      //if ((i|j>max_or) && (i|j<k)) max_or=i|j;
      //if ((i^j>max_xor) && (i^j<k)) max_xor=i^j;
    }
  }
  printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
  */
  int maxand = 0;
  printf("n: %d,  k: %d\n\n", n, k);
  int a=1, b=2;
  if (((a&b)>maxand) && ((a&b)<k)) maxand=(a&b);
  printf("a: %d,  b: %d,  (a&b): %d  maxand: %d\n", a, b, (a&b), maxand);
  a=1, b=3;
  if (((a&b)>maxand) && ((a&b)<k)) maxand=(a&b);
  printf("a: %d,  b: %d,  (a&b): %d  maxand: %d\n", a, b, (a&b), maxand);
  a=1, b=4;
  if (((a&b)>maxand) && ((a&b)<k)) maxand=(a&b);
  printf("a: %d,  b: %d,  (a&b): %d  maxand: %d\n", a, b, (a&b), maxand);
  a=1, b=5;
  if (((a&b)>maxand) && ((a&b)<k)) maxand=(a&b);
  printf("a: %d,  b: %d,  (a&b): %d  maxand: %d\n", a, b, (a&b), maxand);
  a=2, b=3;
  if ((a&b)>maxand){
    printf("(a&b) es mayor que el manand");
  };
  if (((a&b)>maxand) && ((a&b)<k)){
    printf("dentro");
    maxand=(a&b);
  };
  printf("a: %d,  b: %d,  (a&b): %d  maxand: %d\n", a, b, (a&b), maxand);
  a=2, b=4;
  if (((a&b)>maxand) && ((a&b)<k)) maxand=(a&b);
  printf("a: %d,  b: %d,  (a&b): %d  maxand: %d\n", a, b, (a&b), maxand);
  a=2, b=5;
  if (((a&b)>maxand) && ((a&b)<k)) maxand=(a&b);
  printf("a: %d,  b: %d,  (a&b): %d  maxand: %d\n", a, b, (a&b), maxand);
  a=3, b=4;
  if (((a&b)>maxand) && ((a&b)<k)) maxand=(a&b);
  printf("a: %d,  b: %d,  (a&b): %d  maxand: %d\n", a, b, (a&b), maxand);
  a=3, b=5;
  if (((a&b)>maxand) && ((a&b)<k)) maxand=(a&b);
  printf("a: %d,  b: %d,  (a&b): %d  maxand: %d\n", a, b, (a&b), maxand);
  a=4, b=5;
  if (((a&b)>maxand) && ((a&b)<k)) maxand=(a&b);
  printf("a: %d,  b: %d,  (a&b): %d  maxand: %d\n", a, b, (a&b), maxand);
}

int main() {
    int n, k;
    //printf("Escriba n y k separados por un espacio: ");
    //scanf("%d %d", &n, &k);
    n = 5;
    k = 4;
    calculate_the_maximum(n, k);
 
    return 0;
}

