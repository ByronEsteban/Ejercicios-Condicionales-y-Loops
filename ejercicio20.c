#include <stdio.h>
#include <stdlib.h>

//Escribir un programa que acepte dos argumentos enteros a y b e imprima todos los números divisibles por 3 entre a y b. El segundo argumento tiene que ser mayor o igual que el primero. Si a es mayor a b el programa debe imprimir un mensaje indicando al usuario el uso correcto del programa y salir.

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = a;
  if (a>b) {
    printf("El segundo argumento tiene que ser mayor o igual que el primero\n");
  } else for (int i = a; i <= b; i++) {
    if (c % 3 == 0) {
      printf("%d\n", c);
      c++;
    } else c++;
  }
  return 0;
}
