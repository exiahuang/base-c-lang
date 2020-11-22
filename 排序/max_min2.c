#include "stdio.h"
int max, min;
int main() {
  void max_min_value(int *a, int n);
  int i, a[10], *p;
  p = a;
  printf("Enter ten numbers:\n");
  for (i = 0; i < 10; i++, p++)
    scanf("%d", p);
  printf("\n\n");
  p = a;
  max_min_value(p, 10);
  printf("max=%d\nmin=%d\n\n\n", max, min);
}

void max_min_value(int *a, int n) {
  int *m, *a_end;
  a_end = a + n;
  max = min = *a;
  for (m = a + 1; m < a_end; m++) {
    if (*m > max)
      max = *m;
    else if (*m < min)
      min = *m;
  }
  printf("\n\n");
  return;
}