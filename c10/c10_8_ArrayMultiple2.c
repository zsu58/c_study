#include <stdio.h>

void main()
{
  int anData[3][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12}
  };
  
  int i = 0, j = 0, nCounter = 0;

  for(i = 0; i < 3; ++i)
  {
    for(j = 0; j < 4; ++j)
    {
      printf("%d\t", anData[i][j]);
    }
    putchar('\n');
  }
}
