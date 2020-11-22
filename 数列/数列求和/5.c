#include "stdio.h"
int main() {
  int i;
  float a = 2, b = 1, s = 0, t;
  for (i = 1; i <= 20; i++) {
    s = s + a / b;
    t = a;
    a = a + b;
    b = t;
  }
  printf("S=%9.6f\n", s);
}