#include <stdio.h>

void main()
{
  int i = 0, nInput = 0, nTotal = 0;
  
  for(i = 0; i < 5; ++i)
  {
    scanf("%d", &nInput);

    if(nInput < 0)
      continue;
    nTotal += nInput;
  }
  printf("Total: %d, i: %d\n", nTotal, i);
}
