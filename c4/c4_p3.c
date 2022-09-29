#include <stdio.h>

void main()
{
  char szBuffer[32] = {0};
  printf("Input: ");
  gets(szBuffer);
  // printf("%p\n", &szBuffer);

  printf("Your Input is saved in memory %p and the Input is ", &szBuffer);
  puts(szBuffer);
}
