#include <stdio.h>

int main() {
  int grades[3];
  int sum = 0;
  int i;

  for (i = 0; i < 3; i++) {
    printf("Enter grade %d: ", i + 1);
    scanf("%d", &grades[i]);
    sum += grades[i];
  }

  printf("Average = %d\n", sum / 3);
  return 0;
}
