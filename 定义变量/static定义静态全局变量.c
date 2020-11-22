/*如果在同一个源文件中,外部变量与局部变量同名,
          则在局部变量的作用范围外部变量被屏蔽*/

#include "stdio.h"
int main() {
  int i, num;
  num = 2;
  for (i = 0; i < 3; i++) {
    printf("\n\nThe num equal %d.", num);
    num++;
    {
      static int num = 1;
      printf("\nThe internal block num equal %d.\n", num);
      num++;
    }
  }
}
