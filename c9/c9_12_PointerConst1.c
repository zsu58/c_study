#include <stdio.h>

void main()
{
  int nData = 10;
  const int *pnData = &nData; // 포인터 변수에 저장된 주소가 가리키는 메모리 값의 상수화
  int* const pnNewData = &nData; // 포인터 변수의 상수화
  pnData = NULL;
  *pnNewData = 10;

  // 아래 코드는 컴파일 오류
  // *pnData = 10;
  // pnNewData = NULL;
}
/*
상수화는 변수의 값이 변경되지 않아야할 때 실수로 변경되는 오류를 막기 위함
*/
