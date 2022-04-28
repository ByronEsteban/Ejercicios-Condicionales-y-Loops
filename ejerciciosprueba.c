#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int n = 9;
  if (a==0 || b==0) {
    printf("No pongas cero\n");
  } else if (a <= b) {
    printf("Que a sea mayor que b\n");
  } else for (int i = 0; i <= n; i++) {
    if (i==0) {
      printf("E");
    } else if (i==1) {
      printf("l");
    } else if (i==2) {
      printf(" ");
    } else if (i==3) {
      printf("C");
    } else if (i==4) {
      printf("u");
    } else if (i==5) {
      printf("e");
    } else if (i==6) {
      printf("r");
    } else if (i==7) {
      printf("v");
    } else if (i==8) {
      printf("o");
    } else if (i==9) {
      printf("!!!\n");
    } else i++;
  }
  return 0;
}
