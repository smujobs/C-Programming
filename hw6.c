#include <stdio.h>

int main() {
  int array[5];
  printf("Please input five integers: ");
  scanf("%d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4]);
  printf("\nOdd numbers: ");
  for (int i=0; i < 5; i++) {
    if (array[i] % 2 == 1) printf("%d ", array[i]);
  }
  printf("\nEven numbers: ");
  for (int i=0; i < 5; i++) {
    if (array[i] % 2 == 0) printf("%d ", array[i]);
  }
  return 0;
}