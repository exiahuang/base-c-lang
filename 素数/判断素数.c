#include "math.h"
#include "stdio.h"
int main() {
  int prime(int n);
  int n;
loop:
  printf("n=");
  scanf("%d", &n);
  if (n <= 1)
    goto loop;

  if (prime(n))
    printf("\n%d is a prime number.", n);
  else
    printf("\n%d is not a prime number.", n);
}

int prime(int n) {
  int i, flag;
  for (i = 2; i <= sqrt(n); i++) {
    if (n % i == 0)
      flag = 0;
    else
      flag = 1;
  }
  return (flag);
}