#include <stdio.h>
#include <stdlib.h>


//Escribir una versión mejorada del programa para calcular las raíces de una función cuadrática, del apunte anterior. El programa debe imprimir un mensaje de error en los casos que el discriminante sea menor a cero (raíz negativa) o el argumento a sea igual a cero (división por cero).

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  double disc = (b*2)-4*a*c;
  if (a == 0) {
    printf("Error\n");
  } else if (disc < 0){
    printf("No es Real\n");
  } else if (disc == 0){
    printf("%d/(2*%d)\n", -b, a);
  }
  }
