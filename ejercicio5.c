#include <stdio.h>
#include <stdlib.h>

//Escribir un programa que imprima los números entre el 1000 y el 1999, mostrando 5 números por línea.

int main(int argc, char const *argv[]) {
  int i = 1000;
  while (i <= 1999) {
    printf("%d ", i);
    i ++;
    if (i % 5 == 0) printf("\n");
  }
  return 0;
}
