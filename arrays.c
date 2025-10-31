#include <stdio.h>

int main(void) {
  int size, i;

  printf("Enter the size of the array: ");
  scanf("%d", &size);

  int arr[size];

  printf("Enter %d elements:\n", size);
  for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  int largest = arr[0];
  for (i = 1; i < size; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    }
  }

  printf("The largest number in the array is: %d\n", largest);

  return 0;
}
