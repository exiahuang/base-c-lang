#include "math.h"
#include "stdio.h"
int main() {
  float area, a, b, c, s;
  printf("a=");
  scanf("%f", &a);
  printf("b=");
  scanf("%f", &b);
  printf("c=");
  scanf("%f", &c);
  s = (a + b + c) / 2;
  area = sqrt(s * (s - a) * (s - b) * (s - c));
  printf("area=%f", area);
}