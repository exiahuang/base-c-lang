//最长的单词:由键盘输入一行英文句子（最大80个字符），
//输出字符数最多的单词（最多不超过20个字符）。
//（如，用户由键盘输入）This  is  my  first  program!
//（程序输出，注意标点符号不要输出）program

#include "stdio.h"
#include "string.h"
int main() { /*length[20]是单词长度,flag[20]是每个单词开头所在位子,max_place是最长单词所在位子*/
  int i, j = 0, num_word = 0, word = 0;
  char string[80];
  int length[20], flag[20], max_place;

  printf("Enter a sentense:\n");
  puts(string);

  /*统计单词个数*/
  for (i = 0; string[i] != '\0'; i++) {
    if (string[i] == ' ')
      word = 0;
    else {
      if (word == 0)

      {
        num_word++;
        word = 1;
        flag[j] = i;
        j++;
      }
    }
  }
  j = 0;

  /*统计单词长度*/

  for (i = 1; i <= num_word; i++) {
    length[i] = flag[i] - flag[i - 1] - 1;
  }

  for (i = 1; i <= num_word - 1; i++) {

    for (j = i + 1; j <= num_word; j++) {
      if (length[i] > length[j]) {
        max_place = i;
      }
    }
  }

  for (i = flag[max_place - 1]; string[i] != ' '; i++) {
    printf("%c", string[i]);
  }
}