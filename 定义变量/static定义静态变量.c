/*学习static定义静态变量的用法　*/

#include "stdio.h"
int main() {
  int i;
  void f(void);
  for (i = 0; i <= 3; i++)
    f();
}

void f(void) {
  int n = 1;
  static int s_n = 1;
  printf("\n\nint number equal %d", n);
  printf("\nstatic int number equal %d\n\n", s_n);
  n++;
  s_n++;
}
