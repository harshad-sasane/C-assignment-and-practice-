// day9_recursion.c
#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main(void) {
  int num = 5;
  printf("Factorial of %d is %d\n", num, factorial(num));
  return 0;
}
