#include "stdio.h"
int main() {
  void good(char course[5][10], int num[], float score[4][5], float aver[4]);
  void fail2(char course[5][10], int num[], float score[4][5], float aver[4]);
  void faver1(char *pcourse, float *pscore);
  void faver(float *pscore, float *paver);
  int i, j, *pnum, num[4];
  float score[4][5], aver[4], *pscore, *paver;
  char course[5][10], *pcourse;

  printf("Input course:\n");
  pcourse = course[0];
  for (i = 0; i < 5; i++)
    scanf("%s", course[i]);
  printf("Input No. and course:\nNo.");
  for (i = 0; i < 5; i++)
    printf(",%s", course[i]);
  printf("\n\n");

  pscore = &score[0][0];
  pnum = &num[0];
  for (i = 0; i < 4; i++) {
    scanf("%d", pnum + i);
    for (j = 0; j < 5; j++)
      scanf(",%f", pscore + 5 * i + j);
  }

  paver = &aver[0];
  printf("\n\n");
  faver(pscore, paver);
  faver1(pcourse, pscore);
  printf("\n\n");
  fail2(pcourse, pnum, pscore, paver);
  printf("\n\n");
  good(pcourse, pnum, pscore, paver);
  printf("\n\n");
}
void faver(float *pscore, float *paver) {
  int i, j;
  float sum, average;
  for (i = 0; i < 4; i++) {
    sum = 0;
    for (j = 0; j < 4; j++)
      sum = sum + (*(pscore + 5 * i + j));
    average = sum / 5;
    *(paver + i) = average;
  }
}
void faver1(char *pcourse, float *pscore) {
  int i;
  float sum, average1;
  sum = 0;
  for (i = 0; i < 4; i++)
    sum = sum + (*(pscore + 5 * i));
  average1 = sum / 4;
  printf("course 1: %s ,average score:%6.2f\n", pcourse, average1);
}
void fail2(char course[5][10], int num[], float score[4][5], float aver[4]) {
  int i, j, k, label;
  printf("============Student who is failed============\n");
  printf("NO.");
  for (i = 0; i < 5; i++)
    printf("%10s", course[i]);
  printf("average\n");
  for (i = 0; i < 4; i++) {
    label = 0;
    for (j = 0; j < 5; j++) {
      if ((score[i][j] < 60.0))
        label++;
    }
    if (label >= 2) {
      printf("%5d", num[i]);
      for (k = 0; k < 5; k++)
        printf("%10.2f", score[i][k]);
      printf("%10.2f\n", aver[i]);
    }
  }
}
void good(char course[5][10], int num[], float score[4][5], float aver[4]) {
  int i, j, k, n;
  printf("============Student whose score is good============\n");
  printf("NO.");
  for (i = 0; i < 5; i++)
    printf("%10s", course[i]);
  printf("average\n");
  for (i = 0; i < 4; i++) {
    n = 0;
    for (j = 0; j < 5; j++) {
      if ((score[i][j] > 85.0))
        n++;
      if ((n == 5) || (aver[i] >= 90)) {
        printf("%5d", num[i]);
        for (k = 0; k < 5; k++)
          printf("%10.2f", score[i][k]);
        printf("%10.2f\n", aver[i]);
      }
    }
  }
}
