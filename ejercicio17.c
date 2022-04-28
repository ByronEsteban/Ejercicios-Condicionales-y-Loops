#include <stdio.h>
#include <stdlib.h>

//Escribir un programa que imprima los números en el rango del 1 al 100 que al ser divididos por un argumento entero n, su resto sea igual a 3.

int main(int argc, char const *argv[]) {
   int n = atoi(argv[1]);
  for (int i = 1; i <= 100; i++) {
    if (i % n == 3) printf("%d\n", i);
  }
  return 0;
}
