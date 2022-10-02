#include <stdio.h>

void main()
{
  /*
  모든 메모리는 바이트 단위로 고유한 주소를 가지고 있음
  변수란 특정 주소의 메모리에 부여 한 이름
  자료형은 그 메모리를 해석하는 방법

  [주소 연산자]
  &A: 연산의 결과는 식별자 A의 메모리 주소
  */
  int nData = 10;
  int nResult = 0;

  nResult += nData;
  printf("%d, %p\n", nData, &nData);
  printf("%d, %p\n", nResult, &nResult);
}
