#include <stdio.h>

void main()
{
  char ch;
  while((ch = getchar()) != '/')
  {
    putchar(ch);
  }
}
