#include "stdio.h"
int main() {
  void copystr(char *p1, char *p2, int m);
  int m;
  char *str1[20], *str2[20];
  printf("Input a string:\n");
  gets(str1);
  printf("Which character that begai to copy?\n");
  scanf("%d", &m);
  if (strlen(str1) < m)
    printf("Enter error!\n\n");
  else {
    copystr(str1, str2, m);
    printf("result:%s\n\n", str2);
  }
}

void copystr(char *p1, char *p2, int m) {
  p1 = p1 + m - 1;
  while (*p1 != '\0') {
    *p2 = *p1;
    p1++;
    p2++;
  }
  *p2 = '\0';
}