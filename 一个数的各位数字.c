/*见习题5．7*/

#include "stdio.h"
int main() {
  long num;
  int place, ten_thousand, thousand, hundred, ten, indiv;
  printf("Input a number between 0 and 99999 :");
  scanf("%ld", &num); /*超过65535用%ld*/

  if (num > 9999)
    place = 5;
  else if (num > 999)
    place = 4;
  else if (num > 99)
    place = 3;
  else if (num > 9)
    place = 2;
  else
    place = 1;
  printf("place=%d\n", place);

  printf("Each place is :");
  ten_thousand = num / 10000;
  thousand = (int)(num - ten_thousand * 10000) / 1000;
  hundred = (int)(num - ten_thousand * 10000 - thousand * 1000) / 100;
  ten =
      (int)(num - ten_thousand * 10000 - thousand * 1000 - hundred * 100) / 10;
  indiv = (int)(num - ten_thousand * 10000 - thousand * 1000 - hundred * 100 -
                ten * 10);

  switch (place) {
  case 5:
    printf("%d,%d,%d,%d,%d", ten_thousand, thousand, hundred, ten, indiv);
    printf("\nThe reverse order is ");
    printf("%d%d%d%d%d\n", ten_thousand, thousand, hundred, ten, indiv);
    break;

  case 4:
    printf("%d,%d,%d,%d", thousand, hundred, ten, indiv);
    printf("\nThe reverse order is ");
    printf("%d%d%d%d\n", thousand, hundred, ten, indiv);
    break;
  case 3:
    printf("%d,%d,%d", hundred, ten, indiv);
    printf("\nThe reverse order is ");
    printf("%d%d%d\n", hundred, ten, indiv);
    break;

  case 2:
    printf("%d,%d", ten, indiv);
    printf("\nThe reverse order is ");
    printf("%d%d\n", ten, indiv);
    break;
  case 1:
    printf("%d", indiv);
    printf("\nThe reverse order is ");
    printf("%d\n", indiv);
    break;
  }
}