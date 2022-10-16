#include <stdio.h>

void Swap(int* pnA, int* pnB)
{
  int nTmp = 0;
  nTmp = *pnA;
  *pnA = *pnB;
  *pnB = nTmp;
}

void main(void)
{
  int x = 5, y = 9;
  Swap(&x, &y);
  printf("%d, %d\n", x, y);
}
/*
참조 호출 방식
*/