#include "stdio.h"
int main() {
  void move(int *p);
  int a[3][3], *p, i, j;
  printf("Input matrix:\n");
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++)
      scanf("%d", &a[i][j]);
  p = &a[0][0];
  move(p);
  printf("\n\nNew maxtrix:\n");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++)
      printf("%d ", a[i][j]);
    printf("\n");
  }
}
void move(int *p) {
  int i, j, temp;
  for (i = 0; i < 3; i++)
    for (j = i; j < 3; j++) {
      temp = *(p + 3 * i + j);
      *(p + 3 * i + j) = *(p + 3 * j + i);
      *(p + 3 * j + i) = temp;
    }
}