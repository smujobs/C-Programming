#include <stdio.h>

int main() {
  for (int row = 1; row <= 5; row++) {
    for (int blankToPrint = 1; blankToPrint <= 5 - row; blankToPrint++) {
      printf(" ");
    }

    for (int starToPrint = 1; starToPrint <= 2 * row - 1; starToPrint++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}