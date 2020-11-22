//魔方阵：他的每一行，每一列和对角线都相等.
//魔方阵的阶数都是奇数。

#include "stdio.h"
int main() {
  int a[16][16], p = 1, n, k;

  while (p == 1) /*p为控制n，使n为奇数*/
  {
    printf("Enter n(n=1~15):"); /*n为方阵的大小*/
    scanf("/d", &n);
    if ((n > 0) && (n <= 15) && (n % 2 != 0))
      p = 0;
  }

  for (i = 0; i <= n; i++)
    for (j = 0; j <= n; j++)
      a[i][j] = 0; /*数组初始化*/

  j = n / 2 + 1;
  a[1][j] = 1; /*第一行的中间为1*/

  for (k = 2; k <= n * n; k++) {
    i = i + 2;
    j = j - 1;
  }
}