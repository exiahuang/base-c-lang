#include "stdio.h"
int main() {
  char *str1[20], *str2[20], *str3[20];
  char swap();
  printf("Input three lines:\n");
  gets(str1);
  gets(str2);
  gets(str3);

  if (strcmp(str1, str2) > 0)
    swap(str1, str2);
  if (strcmp(str1, str3) > 0)
    swap(str1, str3);
  if (strcmp(str2, str3) > 0)
    swap(str2, str3);

  printf("The new order:\n");
  puts(str1);
  puts(str2);
  puts(str3);
}

char swap(char *p1, char *p2) {
  char *p[20];
  strcpy(p, p1);
  strcpy(p1, p2);
  strcpy(p2, p);
}