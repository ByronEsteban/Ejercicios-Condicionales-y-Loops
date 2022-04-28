#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int suma = 0;
  int contador = 0;
  while (contador <= n) {
    suma = suma + contador;
    contador = contador +1;
  }
  printf("%d\n", suma);
  return 0;
}
