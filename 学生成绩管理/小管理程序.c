#include <stdio.h>
struct student {
  char name[100]; //用户姓名
  int score;
  int a[5];
  int mc;
} x[3];
int main() {
  int i, j;
  for (i = 0; i < 3; i++) {
    x[i].score = 0;
    printf("第%d位同学\n", i + 1);
    for (j = 0; j < 5; j++) {
      printf("第%d科成绩", j + 1);
      scanf("%d", &x[i].a[j]);
      x[i].score = x[i].a[j] + x[i].score;
    }
    printf("第%d位同学总分为%d\n\n", i + 1, x[i].score);
  }
  for (i = 0; i < 3; i++) {
    x[i].mc = 1;
    for (j = 0; j < 3; j++) {
      if (x[i].score < x[j].score)
        x[i].mc++;
    }
    printf("第%d为同学是第%d名\n", i + 1, x[i].mc);
  }
}