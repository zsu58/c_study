#include <stdio.h>
 #include <string.h>

void main()
{
  char *pszData = "TEST STRING!";
  int nData = 0;

  memcpy(&nData, pszData, 3); // 5 이상이 되면 결과가 이상해짐
  printf("%s\n", (char*)&nData);
}
