#include "stdio.h"
int main() {
  int a, n, i;
  long tn, sn;
  tn = 0;
  sn = 0;
  printf("Enter a=");
  scanf("%d", &a);
  printf("Enter n=");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    tn = tn + a;
    sn = sn + tn;
    a = 10 * a;
  }

  printf("sn=a+aa+aaa+...=%ld\n", sn);
}