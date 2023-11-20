#include <stdio.h>

void Swap(int *ptrNum1, int *ptrNum2, int *ptrNum3) {
  int temp = *ptrNum1;
  *ptrNum1 = *ptrNum2; *ptrNum2 = *ptrNum3; *ptrNum3 = temp;
}

int main() {
  int num_1 = 3;
  int num_2 = 4;
  int num_3 = 7;
  printf("%d %d %d\n", num_1, num_2, num_3);
  Swap(&num_1, &num_2, &num_3);
  printf("%d %d %d\n", num_1, num_2, num_3);
  return 0;
}