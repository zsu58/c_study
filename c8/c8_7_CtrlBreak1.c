#include <stdio.h>

void main()
{
  char ch;
  while(1)
  {
    if((ch = getchar()) == '/')
      break;
    putchar(ch);
  }
}
