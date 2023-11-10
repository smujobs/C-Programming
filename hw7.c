#include <stdio.h>

void printArray(int arr[6]) {
  for(int i = 0; i < 6; i++) {
    printf("%d ", arr[i]);
  }
}

int main() {
  int arr1[6] = {1, 2, 3, 4, 5, 6}, arr2[6] = {7, 8, 9, 10, 11, 12};
  int *p1 = &arr1[0];
  int *p2 = &arr2[0];
  int temp;

  printf("arr1: ");
  printArray(arr1);
  printf("\narr2: ");
  printArray(arr2);

  for (int i = 0; i < 6; i++) {
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    p1++;
    p2++;
  }

  printf("\n\nafter swap\narr1: ");
  printArray(arr1);
  printf("\narr2: ");
  printArray(arr2);
  return 0;
}