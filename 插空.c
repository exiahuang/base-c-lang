/*写一个函数，使输入的字符之间有一个空格*/

#include "stdio.h"
#include "string.h" /*用到了strlen函数*/
int main() {
  void change(char s[]);
  char s[100];
  printf("\nInput a string :");
  scanf("%s", s);
  change(s);
}

void change(char s[]) {
  int i;
  for (i = strlen(s); i > 0; i--) {
    s[2 * i] = s[i];
    s[2 * i - 1] = ' ';
  }
  printf("\nOutput the change string is \n%s\n", s);
}