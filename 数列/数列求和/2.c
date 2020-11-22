#include "stdio.h"
int main() {
  float S = 0, a = 1;
  int n, i;
  printf("n=");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    a = a * i;
    S = S + a;
  }
  printf("\nS=%e\n", S);
}