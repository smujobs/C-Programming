#include <stdio.h>

int main() {
  int inputNum1 = 0, inputNum2 = 0;
  printf("Input two integers: ");
  scanf("%d %d", &inputNum1, &inputNum2);

  int andInputs = inputNum1 & inputNum2;
  int orInputs = inputNum1 | inputNum2;
  int xorInputs = inputNum1 ^ inputNum2;

  printf("\n%d & %d = %d\n", inputNum1, inputNum2, andInputs);
  printf("\n%d | %d = %d\n", inputNum1, inputNum2, orInputs);
  printf("\n%d ^ %d = %d\n", inputNum1, inputNum2, xorInputs);
  return 0;
}