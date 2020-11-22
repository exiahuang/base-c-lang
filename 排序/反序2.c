#include "stdio.h"
int main() {
  void inv(int x[], int n);
  int i, a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  printf("Original Array:\n");
  for (i = 0; i < 10; i++)
    printf("%d,", a[i]);
  printf("\n");
  inv(a, 10);
  printf("Inverted:\n");
  for (i = 0; i < 10; i++)
    printf("%d,", a[i]);
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
