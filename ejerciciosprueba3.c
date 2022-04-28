#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char const *argv[]) {
  double suma = 0.0;
  int max = INT_MIN;
  int min = INT_MAX;
  for (int i = 1; i < argc; i++) {
    int n = atoi(argv[i]);
    if (n > max) max = n;
    if (n < min) min = n;
    suma += n;
    printf("%d ", n);
  }
  printf("\n");
  printf("prom: %.2f\n", suma/(argc-1));
  printf("max: %d\n", max);
  printf("min: %d\n", min);
  return 0;
}
