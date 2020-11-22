/*输出最大前三项
  由键盘输入10个英文单词，
  输出10个单词中在字典里排最前的前三个，
  要求按由前到后的顺序输出。
（如，用户由键盘输入）
        smith
        hello
        good
        yahoo
        smith
        town
        flower
        water
        sun
        year
        （程序输出）
        flower
        0good
        hello					*/

#include "stdio.h"
#include "string.h"
int main() {
  /*letter[11][30]是输入的单词*/
  char letter[11][30];
  int i, j;
  printf("Enter ten letters:\n");
  for (i = 1; i < 11; i++)
    scanf("%s", letter[i]);

  for (i = 1; i <= 9; i++) {
    for (j = i + 1; j <= 10; j++) {
      if (strcmp(letter[i], letter[j]) > 0) {
        strcpy(letter[0], letter[i]);
        strcpy(letter[i], letter[j]);
        strcpy(letter[j], letter[0]);
      }
    }
  }

  printf("\n\n\n\n");

  for (i = 1; i <= 3; i++) {

    printf("%s\n", letter[i]);
  }
}