#include <stdio.h>

void main()
{
  int x = 0, y = 0;
  for(y = 0; y < 5; y++)
  {
    for(x = 0; x < y + 1; ++x)
    {
      printf("*\t");
    }
    putchar('\n');
  }
}
