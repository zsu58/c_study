#include <stdio.h>

void main()
{
  char szName[16] = {"Hong Gil-dong"};
  char *pszName = szName;

  printf("%c, %c\n", szName[3], pszName[3]);
  printf("%p, %p\n", szName + 3, pszName + 3);
  printf("%c, %c\n", *(szName + 3), *(pszName + 3));
}
