#include <stdio.h>

void main()
{
  char ch;
  REVERSE:
    ch = getchar(); 
  if (ch != 'y' && ch != 'Y')
    goto REVERSE;
}
