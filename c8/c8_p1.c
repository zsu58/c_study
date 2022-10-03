#include <stdio.h>

void main()
{
  int nTotal = 0, i = 0;
  for(i = 0; i < 101; ++i)
  {
    nTotal += i;
  }
  printf("%d\n", nTotal);
}
