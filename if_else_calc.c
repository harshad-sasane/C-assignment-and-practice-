#include <stdio.h>
int main() {
  float num1, num2, result;
  char op;

  printf("entre 1st number: ");
  scanf("%f", &num1);

  printf("enter operator (+, -, *, /): ");
  scanf(" %c", &op);

  printf("entre 2nd number: ");
  scanf("%f", &num2);

  if (op == '+') {
    result = num1 + num2;
  } else if (op == '-') {
    result = num1 - num2;
  } else if (op == '*') {
    result = num1 * num2;
  }

  return 0;
}
