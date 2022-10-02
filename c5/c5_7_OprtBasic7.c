#include <stdio.h>

void main()
{
  int nResult = 0, nData = 10;
  
  nResult = 3;
  nResult = nData; // 메모리 값이 달라짐
  nResult = nData = 10; // 메모리 값이 달라짐

  printf("%d, %d\n", nResult, nData);
}
