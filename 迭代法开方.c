/*迭代法求x=sqrt(a),用迭代公式x(n+1)=[x(n)+a/x(x)]/2*/
#include "math.h"
#include "stdio.h"
int main() {
  float a, x0, x1;
  printf("Enter a postive number:");
  scanf("%f", &a);
  x0 = a / 2;
  x1 = (x0 + a / x0) / 2;
  do {
    x0 = x1;
    x1 = (x0 + a / x0) / 2;
  } while (fabs(x0 - x1) >= 1e-5);
  printf("The square root of %f is %f\n", a, x1);
}