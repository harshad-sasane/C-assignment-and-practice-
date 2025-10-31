#include <stdio.h>

int main(void) {
  int var = 42;
  int *ptr = &var;

  printf("Variable value: %d\n", var);
  printf("Pointer address: %p\n", (void *)ptr);
  printf("Pointer value: %d\n", *ptr);

  return 0;
}
