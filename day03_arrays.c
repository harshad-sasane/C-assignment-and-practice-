#include <stdio.h>

int main(void) {
  // 1. Simple array
  int numbers[5] = {10, 20, 30, 40, 50};

  printf("Array elements:\n");
  for (int i = 0; i < 5; i++) {
    printf("numbers[%d] = %d\n", i, numbers[i]);
  }

  // 2. Character array (string)
  char name[] = "Termux";
  printf("\nName: %s\n", name);

  return 0;
}
