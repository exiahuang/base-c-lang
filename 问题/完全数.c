/*完全数是一个数，它等于它的因子之和*/

#include "stdio.h"
#define MAX 1000 /*1~10000范围的完全数*/
int main() {
  int n, i, j, a[100], s; /*n是完全数,a[]用来装因子,i是n的因子*/

  for (n = 2; n <= MAX; n++) {
    j = 1;
    s = 0;
    for (i = 1; i < MAX; i++) {

      if ((n % i) == 0) {
        a[j] = i;
        s = s + i;
        j++;
      }
    }
    if (n == s)
      printf("%d\n", n);
  }
}