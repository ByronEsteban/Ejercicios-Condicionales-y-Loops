#include <stdio.h>
#include <stdlib.h>

//Escribir un programa que use un ciclo for para imprimir los primeros n números de Fibonacci. Usar un argumento de línea de comandos para el valor de n. La sucesión de Fibonacci comienza así: 0, 1, 1, 2, 3, 5, 8, 13, 21 ... etc. El próximo número en la sucesión es la suma de los dos anteriores.

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int a = 0;
  int b = 1;
  int c = a + b;
  if (n<=0) {
    printf("No funciona");
  } else if (n==1) {
    printf("%d\n", a);
  } else if (n==2) {
    printf("%d %d\n", a, b);
  } else
  printf("%d %d ", a, b);
  for (int i = 3; i <= n; i++) {
    c = a + b;
    printf("%d ", c);
    a = b;
    b = c;
  }
  printf("\n");
  return 0;
}
