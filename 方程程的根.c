#include "math.h"
#include "stdio.h"
float x1, x2, disc, p, q;
int main() {
  void more(float a, float b);
  void equation(float a, float b);
  void less(float a, float b);
  float a, b, c;
  printf("a=");
  scanf("%f", &a);
  printf("b=");
  scanf("%f", &b);
  printf("c=");
  scanf("%f", &c);
  printf("\nequation:%f*x*x+%f*x+%f=0\n", a, b, c);

  disc = b * b - 4 * a * c;
  if (disc > 0) {
    more(a, b);
    printf("x1=%f\nx2=%f\n\n", x1, x2);
  } else if (disc == 0) {
    equation(a, b);
    printf("x1=%f\nx2=%f\n\n", x1, x2);
  } else {
    less(a, b);
    printf("x1=%f+%fi\nx2=%f-%fi\n\n", p, q, p, q);
  }
}

void more(float a, float b) {
  x1 = (-b + sqrt(disc)) / (2 * a);
  x2 = (-b - sqrt(disc)) / (2 * a);
}
void equation(float a, float b) { x1 = x2 = (-b) / (2 * a); }
void less(float a, float b) {
  p = (-b) / (2 * a);
  q = sqrt(disc) / (2 * a);
}