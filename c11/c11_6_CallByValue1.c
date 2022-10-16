#include <stdio.h>

void Swap(int nA, int nB)
{
  int nTmp = 0;
  nTmp = nA;
  nA = nB;
  nB = nTmp;
}

void main(void)
{
  int x = 5, y = 9;
  Swap(x, y);
  printf("%d, %d\n", x, y);
}
/*
값 호출 방식
*/