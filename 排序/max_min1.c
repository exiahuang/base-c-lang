#include "stdio.h"
int max, min;
int main() {
  void max_min_value(int a[], int n);
  int i, a[10];
  printf("Enter ten numbers:\n");
  for (i = 0; i < 10; i++)
    scanf("%d", &a[i]);
  printf("\n\n");
  max_min_value(a, 10);
  printf("max=%d\nmin=%d", max, min);
}

void max_min_value(int a[], int n) {
  int *p, *a_end;
  a_end = a + n;
  max = min = *a;
  for (p = a + 1; p < a_end; p++) {
    if (*p > max)
      max = *p;
    else if (*p < min)
      min = *p;
  }
  printf("\n\n");
  return;
}