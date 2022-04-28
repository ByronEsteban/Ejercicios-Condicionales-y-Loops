#include <stdio.h>
#include <stdlib.h>

//Escribir un programa que calcule el factorial de un número n ingresado como argumento.

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int res = 1;
if (n==0){
  printf("1\n");
} else{
   while (n>0){
     res = res * n;
     n = n-1;
   }
  printf("%d\n", res);
 }

  return 0;
}
