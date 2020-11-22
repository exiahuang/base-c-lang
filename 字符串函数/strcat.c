#include "stdio.h"
int main() {
  extern char concatenate(char string1[], char string2[], char string[]);
  char s1[100], s2[100], s[200];
  printf("Input string1 :");
  scanf("%s", s1);
  printf("\nInput string2 :");
  scanf("%s", s2);
  concatenate(s1, s2, s);
  printf("The concatenate string is %s.\n", s);
} /*要加extern,不然会错*/

char concatenate(char string1[], char string2[], char string[]) {
  int i, j;
  for (i = 0; string1[i] != '\0'; i++)
    string[i] = string1[i];
  for (j = 0; string2[j] != '\0'; j++)
    string[i + j] = string2[j];
  string[i + j] = '\0';
}