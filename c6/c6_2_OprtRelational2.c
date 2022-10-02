#include <stdio.h>

void main()
{

  int nData = 10, nNewData = 20;
  int nResult = 10;
  /*
  산술 연산자가 관게 연산자보다 우선순위
  */
  printf("%d\n", nNewData == nData + nResult);
  printf("%d\n", nNewData - 10 != nData);
  printf("%d\n", nData == nResult++);
  printf("%d\n", nData == nResult);
  printf("%d\n", nData == --nResult);
}
