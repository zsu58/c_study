#include <stdio.h>
#include <malloc.h>

void main()
{
  char *pszData = NULL;
  char szBuffer[32];
  int nData;

  pszData = (char*)malloc(sizeof(char) * 16);

  memset(pszData, 0, sizeof(char) * 16);
  memset(szBuffer, 'Z', sizeof(szBuffer));
  memset(&nData, 0xFF, sizeof(int));

  free(pszData);
}

