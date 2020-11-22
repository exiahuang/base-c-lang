#include "stdio.h"
#define N 10
int main() {
  int a[N] = {1};
  int i, j;
  printf("%5d\n", 1);
  for (i = 1; i < N; i++) {
    for (j = i; j > 0; j--)
      a[j] = a[j - 1] + a[j];
    for (j = 0; j <= i; j++)
      printf("%5d", a[j]);
    printf("\n");
  }
}