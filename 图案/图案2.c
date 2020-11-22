//由键盘输入正数n（n<30），
//要求输出如下中间数字为n的菱形图案。
//（如，用户由键盘输入）4
//（程序输出，注：菱形右边不留多余空格）
/*　　　１
　  　１２１
　  １２３２１
  １２３４３２１
　  １２３２１
　　  １２１
　      １       */

#include "math.h"
#include "stdio.h"
int main() {
  int i, t, p, n;
  scanf("%d", &n);
  n = n - 1;
  for (i = -n; i <= n; i++) {
    for (p = 1; p <= abs(i); p++)
      printf(" ");
    for (t = abs(i) - n; t <= n - abs(i); t++)
      printf("%d", n - abs(i) - abs(t) + 1);
    printf("\n");
  }
}

/* 输入一个n，既要打印一个2*(n-1)+1的图案；
   每一行的空格数p正好是|i|;
   每一行数字占的位子是|n-|i||;
   注意到行数加列数再加对应数字的值不变,为n.  */
