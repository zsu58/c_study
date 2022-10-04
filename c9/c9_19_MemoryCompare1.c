#include <stdio.h>
 #include <string.h>

void main()
{
  char *pszData = "1234";
  char szBuffer[16] = {0};
  printf("Input password: ");

  gets(szBuffer);
  if(memcmp(pszData, szBuffer, 4) == 0)
    puts("Success");
  else
    puts("Failure");
}
