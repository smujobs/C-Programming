#include <stdio.h>

double CTF(int c) {
  double f = c * 1.8 + 32;
  return f;
}

int main() {
  int c;
  double f
  printf("섭씨입력: ");
  scanf("%d", &c);
  f = CTF(c);
  printf("화씨로 바꾸면 %f", f);
  return 0;
}