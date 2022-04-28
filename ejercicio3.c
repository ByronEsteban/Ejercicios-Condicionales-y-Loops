//Escribir un programa que simule tirar un dado "cargado". Imprimiendo el resultado de tirar el dado, teniendo en cuenta que la probabilidad de tirar un 1, 2, 3, 4 o 5 es de 1/8 y de tirar un 6 es de 3/8.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int d = (rand() % 8) + 1;
  if (d<6) {
   printf("%d\n", d);
} else{
   printf("6\n");
}
return 0;
}
