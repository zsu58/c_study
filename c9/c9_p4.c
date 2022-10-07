#include <stdio.h>
#include <malloc.h>

void main()
{
  char *pszData = NULL;
  int nInput = 0, nCount = 0;

  printf("Input length: ");
  scanf("%d\n", &nInput);
  pszData = (char*)malloc(sizeof(char) * nInput); 

  fflush(stdin); 
  gets(pszData); 
  
  for (int i = 0; i <= nInput; i++){
    // printf("%c\n", pszData[i]);
    // printf("%c\n", *(pszData + i));
    if (*(pszData + i) != 0)
      nCount++;
  }

  printf("%d\n", nCount);
  free(pszData); 
}
