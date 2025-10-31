// day8_memory.c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *ptr;
  int n = 5;

  // Allocate memory
  ptr = (int *)malloc(n * sizeof(int));

  if (ptr == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  }

  // Use the memory
  for (int i = 0; i < n; i++) {
    ptr[i] = i * 2;
  }

  printf("Array elements: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", ptr[i]);
  }
  printf("\n");

  // Free the memory
  free(ptr);

  return 0;
}
