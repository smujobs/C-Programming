#include <stdio.h>

int main() {
  int num = 10;
  printf("dec: %d, oct: %o, hex: %x\n", num, num, num);
  // printed with '0' for oct, '0x' for hex
  printf("oct: %#o, hex: %#x\n", num, num);
  return 0;
}