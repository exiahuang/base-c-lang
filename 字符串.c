#include "stdio.h"
int main() {
  char str[50], *pstr;
  int i, j, k, m, e10, digit, ndigit, a[10], *pa;
  printf("Enter a string:\n");
  gets(str);
  pstr = str;
  printf("\n\n");
  pa = a;
  ndigit = 0;
  i = 0;
  j = 0;
  // ndigit代表有多少个整数
  while (*(pstr + i) != '\0') {
    if ((*(pstr + i) >= '0') && (*(pstr + i) <= '9'))
      j++;
    else {
      if (j > 0) {
        digit = *(pstr + i - 1) - 48; // 48是字符'0'//digit是个位数字
        k = 1;                        // k是位数
        while (k < j) {
          e10 = 1;
          for (m = 1; m <= k; m++)
            e10 = e10 * 10;
          digit = digit + (*(pstr + i - 1 - k) - 48) * e10;

          k++;
        }
        *pa = digit;
        ndigit++;
        pa++;
        j = 0;
      }
    }
    i++;
  }
  if (j > 0) {
    digit = *(pstr + i - 1) - 48;
    k = 1;
    while (k < j) {
      e10 = 1;
      for (m = 1; m <= k; m++)
        e10 = e10 * 10;
      digit = digit + (*(pstr + i - 1 - k) - 48) * e10;

      k++;
    }
    *pa = digit;
    ndigit++;
    j = 0;
  }
  printf("There are %d numbers in this line.They are:\n", ndigit);
  j = 0;
  pa = &a[0];
  for (j = 0; j < ndigit; j++)
    printf("%d  ", *(pa + j));
  printf("\n\n");
}