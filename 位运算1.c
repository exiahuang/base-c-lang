//取一个整数a从右端开始的4～7位
#include "stdio.h"
int main() {
  unsigned a, b, c, d;
  scanf("%o", &a);
  b = a >> 4;
  c = ~(~0 << 4);
  d = b & c;
  printf("\n\n%o,%d\n%o,%d\n\n\n", a, a, d, d);
}
