#include <stdio.h>

void main()
{
  int nInput = 0;
  printf("Input: ");
  scanf("%d", &nInput);

  while(nInput > 0)
  {
    printf("%dth printf()\n", nInput);
    nInput--;
  }
}
