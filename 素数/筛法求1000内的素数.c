#include "math.h"
#include "stdio.h"
int main() {
  int i, a[1001], j, n;
  for (i = 1; i <= 1000; i++)
    a[i] = i;
  for (i = 2; i <= sqrt(1000); i++)
    for (j = i + 1; j <= 1000; j++) {
      if (a[i] != 0 && a[j] != 0)
        if (a[j] % a[i] == 0)
          a[j] = 0;
    }
  printf("\n");
  for (i = 2, n = 0; i <= 1000; i++) {
    if (a[i] != 0) {
      printf("%5d", a[i]);
      n++;
    }
    if (n == 10) {
      printf("\n");
      n = 0;
    }
  }
  printf("\n");
}
