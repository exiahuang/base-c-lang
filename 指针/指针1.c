#include "stdio.h"
int main() {
  void move(int array[20], int n, int m);
  int number[20], n, m, i;
  printf("n=");
  scanf("%d", &n);
  printf("\nEnter %d numbers:", n);
  for (i = 0; i < n; i++)
    scanf("%d", &number[i]);
  printf("m=");
  scanf("%d", &m);
  move(number, n, m);
  printf("The new order:");
  for (i = 0; i < n; i++)
    printf("%d  ", number[i]);
  printf("\n\n");
}

void move(int array[20], int n, int m) {
  int *p, array_end;
  array_end = *(array + n - 1);
  for (p = array + n - 1; p > array; p--)
    *p = *(p - 1);
  *array = array_end;
  m--;
  if (m > 0)
    move(array, n, m);
}