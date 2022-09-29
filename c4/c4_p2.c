#include <stdio.h>

void main()
{
  char szBuffer[32] = {0};
  printf("Input: ");
  gets(szBuffer);

  printf("Your Input is ");
  puts(szBuffer);
}
