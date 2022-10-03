#include <stdio.h>

void main()
{
  int numArr[5], i = 0, max = 0, min = 0;
  printf("Input :");
  for (i = 0; i < 5; i++)
  {

    scanf("%d", &numArr[i]);
  }
  max = numArr[0], min = numArr[0];
  
  for (i = 0; i < 5; i++)
  {
    if (max < numArr[i])
    {
      max = numArr[i];
    }
    if (min > numArr[i])
    {
      min = numArr[i];
    }
  }
  printf("max: %d, min: %d\n", max, min);
}
