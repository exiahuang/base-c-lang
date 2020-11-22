//分段函数
// X<1时y=x;
// 1≤x＜10时y=2x-1;
// x≥10时y=3x-11.

#include "stdio.h"
int main() {
  float x, y;
  printf("x=");
  scanf("%f", &x);
  if (x < 1) {
    y = x;
    printf("y=%f", y);
  } else if (x < 10) {
    y = 2 * x - 1;
    printf("y=%f", y);
  } else {
    y = 3 * x - 1;
    printf("y=%f", y);
  }
}