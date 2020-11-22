#include <stdio.h>
int main() {
  long x, y;
  int a[101], i, n = 0;
  scanf("%ld", &x);
  y = x;
  for (i = 1; y != 0 && i <= 100; i++) {
    a[i] = y % 10;
    y = y / 10;
    n++;
  }
  for (i = 1; i <= n / 2; i++) {
    if (a[i] != a[n - i + 1])
      break;
  }
  if (i > n / 2)
    printf("%ld 是回文数\n", x);
  else
    printf("%ld 不是回文数\n", x);
}