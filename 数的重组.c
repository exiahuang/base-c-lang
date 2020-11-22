//输入一个位数不多于9位的正整数，将其构成的数码重新组合，
//输出可以组合出的最小数。
//（如，用户由键盘输入）849451（程序输出）144589

#include "stdio.h"
int main() {
  int a[10], i, j, n;
  long num;
  printf("Enter a number:");
  scanf("%ld", &num);

  for (i = 1; i <= 9; i++) {
    a[i] = num % 10;
    num = num / 10;
  }

  for (i = 9; a[i] == 0; i--)
    n = i - 1;

  for (i = 1; i <= n - 1; i++)
    for (j = i + 1; j <= n; j++)
      if (a[i] > a[j]) {
        a[0] = a[i];
        a[i] = a[j];
        a[j] = a[0];
      }

  for (i = 1; i <= n; i++)
    if (a[i] != 0)
      printf("%d", a[i]);
  printf("\n");
}
