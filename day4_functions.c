#include <stdio.h>

// Function declaration
int square(int num);

int main(void) {
  int x = 5;
  printf("%d squared is %d\n", x, square(x));

  return 0;
}

// Function definition
int square(int num) { return num * num; }
