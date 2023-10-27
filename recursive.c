#include <stdio.h>

int get2n(int n) {
  return n == 1 ? 2 : 2 * get2n(n - 1);
}

int main() {
  int n = 5;
  printf("result: %d", get2n(n));
  return 0;
}