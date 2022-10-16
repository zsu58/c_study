#include <stdio.h>

int Add(int nA, int nB)
{
  int nResult = 0;
  nResult = nA + nB;
  printf("%d\n", nResult);

  return nResult;
}

void main(void)
{
  int nResult = 0;
  nResult = Add(3, 4) + 10;
  printf("%d\n", nResult);
}