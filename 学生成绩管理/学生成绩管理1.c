#include "stdio.h"
#include "string.h"
int main() {
  int i, j;
  char num[6][15],
      k[15]; /*i是人数,j是名字长度，num[6]是学号,k是要查找的学生学号*/
  float a[4], average[6];
  float av = 0; /*a[4]是成绩,average[6]是平均成绩,av是总成绩*/
  char name1[6][15],
      name2[15]; /*name1[6][15]是5名学生的姓名,name2[15]输入要查找的学生姓名*/

  for (j = 1; j <= 5; j++) {
    printf("\nInput a student's name:");
    scanf("%s", name1[j]);

    printf("\nInput a student's number:");
    scanf("%d", &num[j]);

    printf("\nInput the student's mark of C,Maths,English :");
    for (i = 1; i <= 3; i++) {
      scanf("%f", &a[i]);
      av = av + a[i];
    }
    average[j] = av / 3.0;
    av = 0;
    printf("\nThe average of the student's mark is %.2f\n", average[j]);
  }

  for (i = 1; i <= 4; i++) {
    for (j = i + 1; j <= 5; j++)
      if (average[i] < average[j]) {
        average[0] = average[i];
        average[i] = average[j];
        average[j] = average[0];
        strcpy(name1[0], name1[i]);
        strcpy(name1[i], name1[j]);
        strcpy(name1[j], name1[0]);
      }
  }
  printf("\nThe mark from high to low:\n");
  for (i = 1; i <= 5; i++)
    printf("%s ", name1[i]);
  printf("\n");
  printf("%7.2f  ", average[i]);

  printf("\n\nInput a student's name:");
  scanf("%s", name2);

  for (j = 1; j <= 5; j++) {
    if (strcmp(name1[j], name2) == 0 || strcmp(num[j], k) == 0)

    {
      printf("\nThe student's mark of C,Maths,English :");
      for (i = 1; i <= 3; i++) {
        printf("%.2f", a[i]);
      }
    }
  }
}