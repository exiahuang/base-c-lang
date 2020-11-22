/*学习使用auto定义变量的用法:
 在一个函数内部,可以在复合语句中定义变量,
 这些变量只在复合语句中有效*/

#include "stdio.h"
int main() {
  int i, num;
  num = 2;
  for (i = 1; i <= 3; i++) {
    printf("\n\nThe num equal %d.", num);
    num++;
    {
      auto int num = 1;
      printf("\nThe internal block num equal %d\n", num);
      num++;
    }
  }
}
