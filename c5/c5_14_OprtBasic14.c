#include <stdio.h>

void main()
{
  /*
  후위 연산 (변수++)는 연산의 우선순위가 가장 나중으로 밀림
  */
  int nData = 10, nNewData = 20;
  int nResult = 0;

  printf("%d\n", ++nData); // 1을 더한 뒤 출력
  printf("%d\n", nData++); // 출력한 뒤 1을 더함

  nResult = ++nData + nNewData++; 
  printf("%d\n", nResult);
}

