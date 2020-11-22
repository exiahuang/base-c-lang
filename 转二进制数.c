//转二进制数:由键盘输入一个正整数，
//输出其对应的二进制数（原码表示）。
//（程序输出，左边不要有多余的0）

#include "stdio.h"
int main() {
  int n, i, r[101], a[101], num = 0;

  printf("Enter a dec num:");
  scanf("%d", &n);
  printf("\n");

  a[0] = n;
  for (i = 1; i < 101; i++) {
    a[i] = (int)(a[i - 1] / 2); // a[i]是辅助用的
    r[i] = a[i - 1] % 2;        // r[i]是余数
  }

  for (i = 1; i < 101; i++) {
    if (a[i] != 0)
      num++;
  }
  num = num + 1; // num是二进制的位数

  printf("The dec number %d is the bin number ", n);
  for (i = num; i >= 1; i--) {
    printf("%d", r[i]);
  }

  printf("\n");
}
