#include "stdio.h"
int main() {
  int n;
  float S = 100, h = S / 2;
  for (n = 2; n <= 10; n++) {
    S = S + 2 * h;
    h = h / 2;
  }
  printf("The distance after ten times is %f\n", S);
  printf("The tenth time rebound which the ball jump is %fm\n", h);
}