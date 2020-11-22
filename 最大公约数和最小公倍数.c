//输入两个正整数m和n，求其最大公约数和最小公倍数。

#include "stdio.h"
int main() {
  int m, n, r, temp, p;
  printf("m=");
  scanf("%d", &m);
  printf("\n");
  printf("n=");
  scanf("%d", &n);
  printf("\n");
  p = m * n;

  if (m < n) {
    temp = m;
    m = n;
    n = temp;
  }

  while (n != 0) {
    r = m % n;
    m = n;
    n = r;
  }

  printf("最大公约数%d\n最小供倍数%d\n", m, p / m);
}