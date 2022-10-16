#include <stdio.h>

int Add(int nA, int nB)
{
  int nResult = 0;
  nResult = nA + nB;

  return nResult;
}

void main(void)
{
  int nResult = 0;
  nResult = Add(3, 4);
}