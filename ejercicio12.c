#include <stdio.h>
#include <stdlib.h>

//Escribir un programa que acepte como argumento un número entero e imprima el número con los digitos al revés. Por ejemplo para la entrada 12345 debe imprimir 54321.

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  while (n>0) {
    printf("%d", n % 10);
    n = n/10;
  }
  printf("\n");
  return 0;
}
