//有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...
//求出这个数列的前20项之和。

#include "stdio.h"
int main() {
  int i, j = 2, k = 1, l;
  float a, s = 0;
  for (i = 1; i <= 20; i++) {
    s = s + j / k;
    l = j;
    j = j + k;
    k = l;
  }

  printf("%.4f\n\n", s);
}
