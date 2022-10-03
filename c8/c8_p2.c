#include <stdio.h>

void main()
{
  int nTotal = 0, nSum = 0, i = 0;
  for(i = 10; i < 101; ++i)
  {
    if (i % 4 == 0)
      {
        nTotal++;
        nSum += i;
      }
  }
  printf("4의 배수: %d\n총합: %d\n", nTotal, nSum);
}
