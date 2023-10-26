#include <stdio.h>

int main() {
  printf("%f \n", 0.1234);
  printf("%e \n", 0.1234); // exponent way, after e means exponents
  printf("%g \n", 0.1234); // write exponent as 'e'
  printf("%G \n", 0.1234); // write exponent as 'E'
  return 0;
}