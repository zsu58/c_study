#include <stdio.h>

void main()
{
  int i = 0, j = 0, k = 0;
  int anData[4][2][3] = {
    {
        {1, 2, 3}, {4, 5, 6}
    },
    {
        {7, 8, 9}, {10, 11, 12}
    },
    {
        {13, 14, 15}, {16, 17, 18}
    },
    {
        {19, 20, 21}, {22, 23, 24}
    }
  };

  for(i = 0; i < 4; ++i)
  {
    for(j = 0; j < 2; ++j)
    {
      for(k = 0; k < 3; ++k)
      {
        printf("%d\t", anData[i][j][k]);
      }
      putchar('\n');
    }
    putchar('\n');
  }
}
