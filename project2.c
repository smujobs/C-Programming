#include <stdio.h>
#include "ascii_art.h"

void printArtFromSpot(xMove, yMove,) {
  
}

int main(void) {
  int userPicChoice;
  printf("그림 번호 선택(1.main, 2.flower, 3.castle, 기타:종료): ");
  scanf("%d", &userPicChoice);

  // Catch exception (OutOfSelectableNum)
  if ((userPicChoice == 1 || userPicChoice == 2 || userPicChoice == 3) == 0) {
    printf("안녕히 가세요");
    return 0;
  }

  printf("성공");

  return 0;
}