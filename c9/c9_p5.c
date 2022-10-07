#include <stdio.h>
#include <malloc.h>

void main()
{
  char *pszData = NULL;
  int nInput = 0;

  printf("Input length: ");
  scanf("%d\n", &nInput);
  pszData = (char*)malloc(sizeof(char) * nInput); 

  fflush(stdin); 
  gets(pszData); 
  
  for (int i = 0; i <= nInput; i++){
    if (*(pszData + i) != 0)
      // printf("%c\n", *(pszData + (nInput - i - 1)));
      putchar(*(pszData + (nInput - i - 1)));
  }
  putchar('\n');
  free(pszData); 
}
