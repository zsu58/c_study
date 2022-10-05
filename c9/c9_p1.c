#include <stdio.h>

void main()
{
  char pszData1[12] = {0};
  char pszData2[12] = {0};
  printf("Input Korean Name1: ");
  gets(pszData1);

  printf("Input Korean Name2: ");
  gets(pszData2);
  if (pszData1[0] == 0 || pszData2[0] == 0)
    printf("다름\n");
  else if (pszData1[0] == pszData2[0])
    printf("같음\n");
  else
    printf("다름\n");
}
