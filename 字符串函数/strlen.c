#include "stdio.h"
int main() {
  int length(char *p);
  int len;
  char *str[20];
  printf("Input a string:");
  gets(str);
  len = length(str);
  printf("The length of string is %d.\n\n", len);
}
int length(char *p) {
  int n;
  n = 0;
  for (; *p != '\0'; p++)
    n++;
  return (n);
}