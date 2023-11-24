#include <stdio.h>
#include <string.h>

char ConvertCase(char ch) {
  if (ch >= 65 && ch <= 90) { // if upperCase
    return ch + 32;
  } else if (ch >= 97 && ch <= 122) { // if lowerCase
    return ch - 32;
  } else if (ch == 32) { // if space
    return 0;
  } else { // if other char
    return ch;
  }
}

int main() {
  const int strMaxLen = 100000;
  char userInput[strMaxLen];
  fgets(userInput, strMaxLen, stdin);
  int strLen = strlen(userInput);
  char currRes;
  for (int i = 0; i < strLen - 1; i++) { // without last null char
    currRes = ConvertCase(userInput[i]);
    if (currRes == 0) { // if space
      printf(" ");
    } else putchar(currRes);
  }
  return 0;
}