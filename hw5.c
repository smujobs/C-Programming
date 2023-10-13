#include <stdio.h>

void PrintRemainderBy2(int num) {
  if (num == 0 || num == 1) {
    printf("%d", num);
  } else {
    PrintRemainderBy2(num / 2);
    printf("%d", num % 2);
  }
}

int main() {
  int inputedNum;
  printf("Please enter a number: ");
  scanf("%d", &inputedNum);
  PrintRemainderBy2(inputedNum);
  return 0;
}