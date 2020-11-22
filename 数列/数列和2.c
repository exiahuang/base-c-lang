//求1+2!+3!+...+20!的和

#include "stdio.h"
int main() {
  int i;
  float s = 0, a = 1;
  for (i = 1; i <= 20; i++) {
    a = a * i;
    s = s + a;
  }
  printf("%e\n\n", s);
}
