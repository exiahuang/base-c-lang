//有趣的数输入任意一个四位数，将其按位数重新组合，
//如3256，可组合成6532和2356，
//用最大值减最小值，得到的值再重新组合，
//若小于四位数，则补零。直到得出一个固定的数。
//编一程序，从键盘输入一个四位数，输出最终的固定数。
//（如，用户由键盘输入）3256（程序输出，）6174

#include "stdio.h"
void p(int num) {
  int a[5], i, j, max, min, d;
  a[4] = (int)(num / 1000);
  a[3] = (int)((num - a[4] * 1000) / 100);
  a[2] = (int)((num - a[4] * 1000 - a[3] * 100) / 10);
  a[1] = (int)(num - a[4] * 1000 - a[3] * 100 - a[2] * 10);

  for (i = 1; i <= 3; i++) {
    for (j = i + 1; j <= 4; j++)
      if (a[i] > a[j]) {
        a[0] = a[i];
        a[i] = a[j];
        a[j] = a[0];
      }
  }

  if (a[4]) {
    max = 1000 * a[4] + 100 * a[3] + 10 * a[2] + a[1];
    min = 1000 * a[1] + 100 * a[2] + 10 * a[3] + a[4];
    d = max - min;
  }

  if (d == num)
    printf("%d", d);
  else
    p(d);
}

int main() {
  int x;
  printf("Enter a number:\n");
  scanf("%d", &x);
  p(x);
  printf("\n");
}