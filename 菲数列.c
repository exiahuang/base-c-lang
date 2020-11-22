#include "stdio.h"
#define N 20
int main() {
  float f1 = 1, f2 = 2;
  int i;
  for (i = 1; i <= N; i++) {
    printf("%15.0f%15.0f", f1, f2);
    f1 = f1 + f2;
    f2 = f2 + f1;
    if (i % 2 == 0)
      printf("\n");
  }
  printf("\n");
}