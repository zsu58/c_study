#include <stdio.h>

void main()
{
  int nA = 10, nB = 20;
  // 삼항 연산자
  nA > nB ? nA++ : nB++;
  printf("%d, %d\n", nA, nB);
  printf("%d\n", nA < nB ? nA : nB);
  printf("%s\n", nA + 20 < nB ? "Big" : "Small");
}
