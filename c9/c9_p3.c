#include <stdio.h>
#include <malloc.h>

void main()
{
  char *pszData = NULL;
  int nInput = 0;

  printf("Input length: ");
  scanf("%d", &nInput);

  if (nInput > 100)
    nInput = 100;
  else if (nInput < 10)
    nInput = 10;
  pszData = (char*)calloc(nInput, sizeof(char));

  size_t ch_size = malloc_usable_size(pszData)/sizeof(char);
  printf(
      "[%p] %ld %s\n",
      pszData, ch_size, pszData
  );
}
