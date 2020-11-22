#include "stdio.h"
int main() {
  void order(int *p, int n);
  int a[10], *p, i;
  p = a;
  printf("Enter ten numbers:\n");
  for (i = 0; i < 10; i++, p++)
    scanf("%d", p);
  p = a;
  order(p, 10);
  p = a;
  for (i = 0; i < 10; i++, p++)
    printf("%d  ", *p);
}
void order(int *p, int n) {
  int *i, *j, temp;
  for (i = p; i <= p + 8; i++)
    for (j = i + 1; j <= p + 9; j++)
      if (*i < *j) {
        temp = *i;
        *i = *j;
        *j = temp;
      }
  return;
}
