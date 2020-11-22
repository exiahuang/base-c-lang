/*此函数只是为了说明continue的用法*/

#include "stdio.h"
#define MIN 100
#define MAX 300
int main() {
  int i;
  for (i = MIN; i <= MAX; i++) {
    if (i % 3 == 0)
      continue; /*看书的115页，注意流程图的Y,N位置*/
    printf("%d  ", i);
  }
}
