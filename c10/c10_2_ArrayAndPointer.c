#include <stdio.h>

void main()
{
  int anData[4] = {1, 2, 3, 4};
  int *pnData = anData;
  int i = 0;
  
  for(i = 0; i < 4; ++i)
      printf("%d, %d\n", pnData[i], *(anData + i));
}
