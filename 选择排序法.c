#include <stdio.h>
int main() {
  int i, j, a[11];
  printf("Enter date:\n");
  for (i = 1; i < 11; i++) {
    printf("a[%d]=", i);
    scanf("%d", &a[i]);
  }
  for (i = 1; i < 10; i++) {
    for (j = i; j < 11; j++)
      if (a[i] > a[j]) {
        a[0] = a[i];
        a[i] = a[j];
        a[j] = a[0];
      }
  }
  printf("\nThe sorted number:\n");
  for (i = 1; i < 11; i++)
    printf("%d-", a[i]);
}