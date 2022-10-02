#include <stdio.h>

void main()
{
  int nA = 0, nB = 0;
  nA = (nB = 10, nB + 2);
  printf("%d, %d\n", nA, nB);
}
