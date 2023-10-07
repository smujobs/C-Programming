#include <stdio.h>

int main() {
  int userInput;
  int isNotPrime = 0;
  printf("Please enter a number: ");
  scanf("%d", &userInput);
  
  for (int i = userInput - 1; i > 1; i--) {
    if (userInput % i == 0) {
      isNotPrime = 1;
      break;
    }
  }

  if (isNotPrime == 0) {
    printf("It is a prime number.");
  } else {
    printf("It is not a prime number.");
  }
  return 0;
}