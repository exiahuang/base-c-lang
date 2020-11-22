/*只有局部自动变量和形式参数可以作为寄存器变量register*/

#include "stdio.h"
int main() {
  register int i;
  int tmp = 0;
  for (i = 1; i <= 100; i++)
    tmp += i;
  printf("The sum is %d\n", tmp);
}
