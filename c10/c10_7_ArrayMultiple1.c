#include <stdio.h>

void main()
{
  int anData[3][4] = {0};
  int i = 0, j = 0, nCounter = 0;

  for(i = 0; i < 3; ++i)
  {
    for(j = 0; j < 4; ++j)
    {
      anData[i][j] = ++nCounter;
    }
  }

  for(i = 0; i < 3; ++i)
  {
    for(j = 0; j < 4; ++j)
    {
      printf("%d\t", anData[i][j]);
    }
    putchar('\n');
  }
}
