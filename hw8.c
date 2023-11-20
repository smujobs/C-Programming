#include <stdio.h>
#include <math.h>

double GetSD(double numArr[], int lenOfArr) {
  double sum = 0, average, valMinusAvgPow2s = 0, variance, standardDeviation;
  for (int i = 0; i < lenOfArr; i++) sum += numArr[i];
  average = sum / lenOfArr;
  for (int i = 0; i < lenOfArr; i++) valMinusAvgPow2s += pow((numArr[i] - average), 2);
  variance = valMinusAvgPow2s / lenOfArr;
  standardDeviation = sqrt(variance);
  return standardDeviation;
}

int main() {
  double numArr[5];
  printf("Enter 5 real numArr: ");
  scanf("%lf %lf %lf %lf %lf", &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4]);
  printf("Standart Deviation = %f", GetSD(numArr, sizeof(numArr) / sizeof(numArr[0])));
  return 0;
}