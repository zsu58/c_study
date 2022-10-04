#include <stdio.h>
 #include <string.h>

void main()
{
  char *pszData = "TEST STRING!";
  int nData = 0;

  memcpy(&nData, pszData, 3);
  printf("%s\n", (char*)&nData);
}
