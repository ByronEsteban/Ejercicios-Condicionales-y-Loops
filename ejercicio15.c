#include <stdio.h>
#include <stdlib.h>
//Usando el Algoritmo de Euclides para encontrar el MCD (máximo común divisor) escribir un programa que acepte como argumento dos números enteros e imprima su MCD.

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int d = 1;
  int max = 0;
  for (int d = 1; d < a || d < b; d++) {
   if (a % d == 0 && b % d == 0) {
     max = d;
   }
 } printf("%d\n", max);
  return 0;
}
