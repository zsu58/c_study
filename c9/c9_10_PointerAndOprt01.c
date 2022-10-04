#include <stdio.h>

void main()
{
  char *pszData = "Test string!";
  printf("%s\n", ++pszData);
  printf("%c\n", *pszData++);
  printf("%c\n", *--pszData);
  printf("%c\n", (*pszData) + 1);
}
