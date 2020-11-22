//输入某年某月某日，判断这一天是这一年的第几天？

#include "stdio.h"
int main() {
  int leapyear(int y);
  int d, m, y;
  int days;
  printf("Enter year,month,day:");
  scanf("%d,%d,%d", &y, &m, &d);

  switch (m) {
  case 1:
    days = d;
    break;
  case 2:
    days = d + 31;
    break;
  case 3:
    days = d + 31 + 28;
    break;
  case 4:
    days = d + 31 + 28 + 31;
    break;
  case 5:
    days = d + 31 + 28 + 31 + 30;
    break;
  case 6:
    days = d + 31 + 28 + 31 + 30 + 31;
    break;
  case 7:
    days = d + 31 + 28 + 31 + 30 + 31 + 30;
    break;
  case 8:
    days = d + 31 + 28 + 31 + 30 + 31 + 30 + 31;
    break;
  case 9:
    days = d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
    break;
  case 10:
    days = d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
    break;
  case 11:
    days = d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
    break;
  case 12:
    days = d + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
    break;
  }

  if (m > 2 && leapyear(y))
    days++;
  printf("%d", days);
}

int leapyear(int y) {
  int flag;
  if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
    flag = 1;
  else
    flag = 0;
  return flag;
}