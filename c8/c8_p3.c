#include <stdio.h>

void main()
{
  int i = 0, j = 0;
  for (i = 2; i < 10; ++i)
  {
    for (j = 1; j < 10; ++j)
    {
      // printf("%d %d\n", i, j);
      printf("%d X %d = %d\n", i, j,  i * j);
    }
  }
}
