#include "stdio.h"
int main() {
  void inv(int *x, int n);
  int i, a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  int *p;
  p = a; //一定要注意指针p是有确定值的
  printf("Enter ten numbers:\n");
  for (i = 0; i < 10; i++, p++)
    scanf("%d", p);
  printf("\n");
  p = a;
  inv(p, 10);
  printf("\n\nInverted:\n");
  for (p = a; p < a + 10; p++)
    printf("%d  ", *p);
  printf("\n");
}
void inv(int *x, int n) {
  int temp, *i, *j, *p, m = (n - 1) / 2;
  i = x;
  j = x + n - 1;
  p = x + m;
  for (; i <= p; i++, j--) {
    temp = *i;
    *i = *j;
    *j = temp;
  }
  return;
}
