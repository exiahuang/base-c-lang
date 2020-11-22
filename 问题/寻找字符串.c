/*寻找字符串:由键盘输入两个字符串
（假设第一个字符串必包含第二个字符串，
 如第一个字符串为ABCDEF，第二个为CDE，则CDE包含在ABCDEF中），
 现要求编程输出第二字符串在第一行字符串中出现的位置。
 （如果第二个字符串在第一个字符串中出现多次，
  则以最前出现的为准）
 （键盘输入）ABCDEFG DE
 （程序输出，因为DE在ABCDEFG中的第4个字符处出现）4  */

#include "stdio.h"
int main() {
  int i, place;
  char a[20], b[20];
  printf("Enter two strings:\n");
  gets(a);
  gets(b);

  for (i = 0; a[i] != '\0'; i++) {
    if (b[0] == a[i]) {
      place = i + 1;
      break;
    } else
      place = 0;
  }

  if (place)
    printf("%d\n", place);
}