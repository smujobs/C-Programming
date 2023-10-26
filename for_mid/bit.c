#include <stdio.h>

int main() {
  int n1 = 15; // 00001111
  int n2 = 20; // 00010100

  // and (1 1 빼고 0)
  printf("%d and %d = %d\n", n1, n2, n1&n2);
  // or (0 0 빼고 1)
  printf("%d or %d = %d\n", n1, n2, n1|n2);
  // xor (달라야만 1)
  printf("%d xor %d = %d\n", n1, n2, n1^n2);
  // not (반전) - 부호 반대로 하고, 1 뺌
  printf("%d not = %d\n", n1, ~n1);
  // left shift (왼쪽 이동), 한 칸씩 이동 시 정수값 두배로 증가
  printf("%d << = %d\n", n1, n1<<1); // 1칸 이동
  // right shift (오른쪽 이동), 한 칸씩 이동 시 정수값 반배로 감소
  // 이때, 앞쪽 비트는 부호 비트와 동일하게 채워짐
  printf("%d << = %d\n", n1, n1>>1); // 1칸 이동
  return 0;
}