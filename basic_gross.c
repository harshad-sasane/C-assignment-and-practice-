#include <stdio.h>

int main() {
  int basic;
  float hra, da, ta, incentive, it, ma, gs;

  printf(
      "Enter basic salary to calculate HRA, DA, TA, Incentive, IT, and MA: ");
  scanf("%d", &basic);
  if (basic < 5000) {
    hra = (basic * 10) / 100.0;
    da = (basic * 6) / 100.0;
    ta = (basic * 2) / 100.0;
    incentive = (basic * 12) / 100.0;
    it = (basic * 6) / 100.0;
    ma = (basic * 3) / 100.0;
  } else {
    hra = (basic * 20) / 100.0;
    │ da = (basic * 6) / 100.0;
    │ ta = (basic * 2) / 100.0;
    │ incentive = (basic * 12) / 100.0;
    │ it = (basic * 6) / 100.0;
    │ ma = (basic * 3) / 100.0;
  }
  gs = basic + hra + da + ta + incentive - it - ma;

  printf("Your Gross Salary is: %.2f\n", gs);

  return 0;
}
