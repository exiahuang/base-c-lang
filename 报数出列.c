/*有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3），
凡报到3的出列，问最后留下的是原来的第几号？*/

#include "stdio.h"
int main() {
  int i, j, out, n, num[50], *p;
  printf("Enter n<50\nn=");
  scanf("%d", &n);
  p = num;
  for (i = 0; i < n; i++)
    *(p + i) = i + 1;
  i = 0;
  j = 0;
  out = 0; // out是出列的人数
  while (out < n - 1) {
    if (*(p + i) != 0)
      j++;
    if (j == 3) //当报数是3时出列，出列置0
    {
      *(p + i) = 0;
      j = 0;
      out++;
    }
    i++;
    if (i == n) //当报数到尾时，i置0
      i = 0;
  }
  while (*p == 0)
    p++;
  printf("The last one is NO.%d\n\n", *p);
}