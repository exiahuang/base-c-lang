#include "stdio.h"
int main() {
  float s1 = 0, s2 = 0, s3 = 0, s, k;
  for (k = 1; k <= 100; k++)
    s1 = s1 + k;
  for (k = 1; k <= 50; k++)
    s2 = s2 + k * k;
  for (k = 1; k <= 10; k++)
    s3 = s3 + 1 / k;
  s = s1 + s2 + s3;
  printf("s=%8.2f\n", s);
}