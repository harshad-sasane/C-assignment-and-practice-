#include <stdio.h>

int main(void) {
 // 1. Count 1-10 with for loop
  printf("Counting up:\n");
  for (int i = 1; i <= 10; i++) {
    printf("%d ", i);
  }

  // 2. Countdown with while
  printf("\nCountdown:\n");
  int j = 5;
  while (j >= 0) {
    printf("%d... ", j);
    j--;
  }
  printf("Liftoff!\n");

  return 0;
}
