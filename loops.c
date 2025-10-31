#include <stdio.h>

int main(void) {
  int number, i;

  printf("Enter a number for multiplication table: ");
  scanf("%d", &number);

  printf("Multiplication table for %d:\n", number);
  for (i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", number, i, number * i);
  }

  return 0;
}
