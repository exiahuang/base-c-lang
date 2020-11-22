/*统计不同数字的个数
 由键盘输入20个整数，统计不同数字的个数。
（如，用户由键盘输入）
70  5  14  22  19  2  99  67  13  66
5  93  44  38  22  11  39  22  33  11
（程序输出，因为5有1个重复数字，
 11有1个重复数字，22有2个重复数字）
   16            */

#include "stdio.h"
int main() {
  int a[21];
  int i, j, num = 0;
  printf("Enter 20 int numbers:\n");
  for (i = 1; i <= 20; i++)
    scanf("%d", &a[i]);
  for (i = 1; i <= 19; i++) {
    for (j = i + 1; j <= 20; j++)
      if (a[i] == a[j])
        break;
    if (j == 21 || j == 20)
      num++;
  }

  printf("\n\nThere is %d different numbers.\n\n", num);
}
