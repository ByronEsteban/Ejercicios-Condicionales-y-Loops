#include <stdio.h>
#include <stdlib.h>

//Escribir un programa que acepte un argumento entero n y use dos loops anidados para imprimir un patrón como el de un tablero de ajedrez usando asteriscos y espacios con n filas y columnas.

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  for (int i = 0; i <= n - 1; i++) {
    for (int j = 0 + i; j <= n + i - 1; j++) {
      if (j % 2 == 0) {
        printf("[] ");
      } else printf("* ");
    } printf("\n");
  }
  printf("\n");
  return 0;
}
