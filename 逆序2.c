//给一个不多于5位的正整数，
//要求：一、求它是几位数，
//二、逆序打印出各位数字。

#include "stdio.h"
int main() {
  long x;
  int a, b, c, d, e;
  printf("x=");
  scanf("%ld", &x);
  a = x / 10000;
  b = x % 10000 / 1000;
  c = x % 1000 / 100;
  d = x % 100 / 10;
  e = x % 10;

  if (a != 0)
    printf("There is 5bit:%d,%d,%d,%d,%d.\n", e, d, c, b, a);
  else if (b != 0)
    printf("There is 4bit:%d,%d,%d,%d.\n", e, d, c, b);
  else if (c != 0)
    printf("There is 3bit:%d,%d,%d,%d.\n", e, d, c);
  else if (d != 0)
    printf("There is 2bit:%d,%d.\n", e, d);
  else
    printf("There is 1bit:%d.\n", e);
}

//一个5位数，判断它是不是回文数。
//即12321是回文数，个位与万位相同，十位与千位相同。　
//同样方法