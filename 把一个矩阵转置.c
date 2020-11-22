#include "stdio.h"
#define N 3
int a[N][N];
int main() {
  void convert(int array[N][N]);
  int i, j;
  printf("Input a 3*3 array:\n");
  for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
      scanf("%d", &a[i][j]);
  printf("\noriginal array:\n");
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) /*矩阵的输出要注意。要把{放在两个for之间！*/
      printf("%5d", a[i][j]);
    printf("\n");
  }
  convert(a);
  printf("\nconvert array:\n");
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++)
      printf("%5d", a[i][j]);
    printf("\n");
  }
}

void convert(int array[N][N]) {
  int i, j, t;
  for (i = 0; i < N; i++)
    for (j = i + 1; j < N; j++) {
      t = a[i][j];
      a[i][j] = a[j][i];
      a[j][i] = t;
    }
}
