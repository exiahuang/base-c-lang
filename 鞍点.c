/*鞍点是在二维数组中，在该行上最大，该列上最小的点*/
#include "stdio.h"
int main() {
  int i, j, max, a[10][10], k, l, n, m;

  printf("\nThe row n is :"); /*输入输出行数n和列数m*/
  scanf("%d", &n);
  printf("\nThe column m is :");
  scanf("%d", &m);

  for (i = 0; i < n; i++) {
    printf("The %d row is \n", i); /*输入输出n*m数组*/
    for (j = 0; j < m; j++)
      scanf("%d", &a[i][j]);
  }
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++)
      printf("%5d", a[i][j]);
    printf("\n");
  }

  for (i = 0; i < n; i++) /*找出第i行上的max,并设max在k列*/
  {
    max = a[i][0];
    for (j = 0; j < m; j++)
      if (max < a[i][j]) {
        max = a[i][j], k = j;
      }

    for (l = 0; l < n; l++) /*判断max是不是在该列最小*/
    {
      if (max < a[l][k])
        printf("\n%drow,%dcolumn,%dis anpoint\n", i, k, max);
    }
  }
}