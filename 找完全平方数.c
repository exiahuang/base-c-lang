//一个整数加上100后是一完全平方数，
//再加上168又是一个完全平方数，请问该数是多少？

#include "math.h"
#include "stdio.h"
int main() {
  long int i;
  long int a, b;

  for (i = 1; i <= 100000; i++) {
    a = sqrt(i + 100);
    b = sqrt(i + 168);
    if ((a * a == i + 100) && (b * b == i + 168))
      printf("%ld", i);
  }
  printf("\n");
}