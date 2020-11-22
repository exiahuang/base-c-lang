#include "math.h"
#include "stdio.h"
int main() {
  int m, k, i;
  printf("m=");
  scanf("%d", &m);
  k = sqrt(m);
  for (i = 2; i <= k; i++)
    if (m % i == 0)
      break;
  if (i > k)
    printf("%d is a prime number\n", m);
  else
    printf("%d is not a prime number\n", m);
}