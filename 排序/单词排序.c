#include "stdio.h"
int main() {
  void sort(char **p);
  int i;
  char **p, *pstr[5], str[5][20];
  for (i = 0; i < 5; i++)
    pstr[i] = str[i];
  printf("Input 5 strings:\n");
  for (i = 0; i < 5; i++)
    scanf("%s", pstr[i]);
  p = pstr;
  sort(p);
  printf("String sort:\n");
  for (i = 0; i < 5; i++)
    printf("%s\n", pstr[i]);
}
void sort(char **p) {
  int i, j;
  char *temp;
  for (i = 0; i < 5; i++) {
    for (j = i + 1; j < 5; j++) {
      if (strcmp(*(p + i), *(p + j)) > 0) {
        temp = *(p + i);
        *(p + i) = *(p + j);
        *(p + j) = temp;
      }
    }
  }
}