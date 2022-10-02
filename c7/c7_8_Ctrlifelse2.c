#include <stdio.h>

void main()
{
  // 성능은 둘이 같음
  int nData = 0, x = 10, y = 20;
  nData = x < y ? x : y;
  printf("%d\n", nData);

  if(x < y) nData = x;
  else nData = y;
  printf("%d\n", nData);
}
