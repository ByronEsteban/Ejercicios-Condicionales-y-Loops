#include <stdio.h>
#include <stdlib.h>

//Escribir un programa que acepte un argumento n entero e imprima los números de 1 hasta n y su cuadrado.

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int a = 1;
  if (n<=0) {
    printf("0");
  } else for (int i = 1; i <=n; i++) {
    printf("%d ", a);
    a = a + 1;
  }
  int c = n * n;
  printf("\nEL CUADRADO: %d ", c);
  printf("\n");
  return 0;
}
