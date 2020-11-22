/*宏定义中允许包含两道衣裳命令的情形，
  此时必须在最右边加上"\"*/

#include "stdio.h"
#define exchange(a, b)                                                         \
  {                                                                            \
    int t;                                                                     \
    t = a;                                                                     \
    a = b;                                                                     \
    b = t;                                                                     \
    \                                                                          \
  }
void main(void) {
  int x = 10, y = 20;
  printf("\nx=%d\ty=%d\n", x, y);
  exchange(x, y);
  printf("\nx=%d\ty=%d\n", x, y);
}
