#include <stdio.h>

void main(void)
{
  int nData = 10;
  printf("%d\n", nData);

  if (nData > 0)
  {
    int nData = 20;
    printf("%d\n", nData);
  }

  printf("%d\n", nData);
}
