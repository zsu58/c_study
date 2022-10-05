#include <stdio.h>

void main()
{
  char szData[] = "Test string!";
  puts(szData);

  printf("%c, %c\n", szData[0], szData[11]);
}
