#include <stdio.h>

int main() {
  double num;
  scanf("%lf", &num); // use lf
  printf("%f\n", num);
  printf("%g", num); // cut useless zeros
  return 0;
}