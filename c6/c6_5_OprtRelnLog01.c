#include <stdio.h>

void main()
{
  int nData = 10, nNewData = 20;
  int nResult = 10;
  printf("%d\n", nData == nResult || nData > nNewData); // 오른쪽 관게 연산 안함
  printf("%d\n", nData != nResult && nData < nNewData); // 오른쪽 관게 연산 안함
  printf("%d\n", nData >= nResult && ++nNewData); // nData가 nResult 변수보다 크거나 같은지 비교한 결과가 참이면 nNewData 변수의 값을 1만큼 증가
}
