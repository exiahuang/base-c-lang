#include "conio.h"
#include "stdio.h"
void main(void) {
  int color;
  void textbackground(int newcolor);
  for (color = 0; color < 8; color++) {
    textbackground(color);
    printf("This is color %d\r\n", color);
    printf("Press any to continue\r\n");
    getchar();
  }
}
