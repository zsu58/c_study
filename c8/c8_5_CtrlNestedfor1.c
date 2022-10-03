#include <stdio.h>

void main()
{
  int x = 0, y = 0;
  while(y < 5)
  {
    x = 0;
    while(x < 4)
    {
      printf("*\t");
      x++;
    }
    putchar('\n');
    y++;
  }
}
