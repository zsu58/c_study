#include <stdio.h>
#include <string.h>
#include <malloc.h>
 
void main()
{
  int i = 0, nLineCount = 0, nMaxLength = 0;
  char **ppszData = NULL;

  scanf("%d %d", &nLineCount,&nMaxLength);
  ppszData= (char**)malloc(sizeof(char*) * nLineCount);

  for(i = 0; i < nLineCount; ++i)
  {
        ppszData[i]= (char*)malloc(nMaxLength);
        fflush(stdin);
        gets(ppszData[i]);
  }

  for(i = 0; i < nLineCount; ++i)
  {
        printf("%p %s\n", ppszData[i], ppszData[i]);
  }

  free(ppszData);
}