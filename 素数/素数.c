//判断101-200之间有多少个素数，并输出所有素数。

#include "math.h"
#include "stdio.h"
int main() {
  int n, i;
  int num = 0;
  for (n = 101; n <= 200; n++) {
    for (i = 2; i <= sqrt(n); i++)
      if (n % i == 0)
        break;
    if (i > sqrt(n)) {
      printf("%-7d", n);
      num++;
      if (num % 5 == 0)
        printf("\n");
    }
  }
  printf("\n\n%d", num);
  printf("\n");
}