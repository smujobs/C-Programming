#include <stdio.h>

float convertKmToMile(float inputedKm) {
  return inputedKm / 1.609;
}

int main(void) {
  float userInputKm, convertedMile;
  printf("Please enter kilometers: ");
  scanf("%f", &userInputKm);
  convertedMile = convertKmToMile(userInputKm);
  printf("%.1f km is equal to %.1f miles.", userInputKm, convertedMile);
  return 0;
}