#include <stdio.h>
int main() {
  int number, digit, s = 0;
  scanf("%d", &number);
  do {
    digit = number % 10;  // 1//2
    number = number / 10; // 1232//123
    s = s + digit;        // 1//2
  } while (number != 0);
  printf("%d\n", s);
}

//键盘输入值12321,输出结果为:_____________
