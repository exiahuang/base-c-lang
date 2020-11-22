#include "math.h"
#include "stdio.h"
int main() {
  float integral(float (*p)(float), float a, float b, float n);
  float fsin(float x);
  float fcos(float x);
  float fexp(float x);
  int n = 32767;
  float a1, a2, a3, b1, b2, b3, c, (*p)(float);
  printf("a1,b1=");
  scanf("%f,%f", &a1, &b1);
  printf("a2,b2=");
  scanf("%f,%f", &a2, &b2);
  printf("a3,b3=");
  scanf("%f,%f", &a3, &b3);

  p = fsin;
  c = integral(p, a1, b1, n);
  printf("sin(x)=%.4f\n\n", c);

  p = fcos;
  c = integral(p, a2, b2, n);
  printf("cos(x)=%.4f\n\n", c);

  p = fexp;
  c = integral(p, a3, b3, n);
  printf("exp(x)=%.4f\n\n", c);
}
float integral(float (*p)(float), float a, float b, float n) {
  int i;
  float x, dx, s;
  dx = (b - a) / n;
  x = a;
  s = 0;
  for (i = 1; i <= n; i++) {
    x = x + dx;
    s = s + (*p)(x)*dx;
  }
  return (s);
}
float fsin(float x) { return sin(x); }
float fcos(float x) { return cos(x); }
float fexp(float x) { return exp(x); }