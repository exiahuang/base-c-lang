#include "stdio.h"
int main() {
  int year, leap;
  printf("Enter a year:");
  scanf("%d", &year);
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    leap = 1;
  else
    leap = 0;
  if (leap = 1)
    printf("%d is a leap year", year);
  if (leap = 0)
    printf("%d is not a leap year", year);
}