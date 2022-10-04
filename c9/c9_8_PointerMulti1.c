#include <stdio.h>

void main()
{
  int nData = 10;
  int *pnData = &nData;
  int **ppnData = &pnData;
  int ***pppnData = &ppnData;

  printf("%p\n", **pppnData);
  printf("%p\n", pppnData[0][0]); // 위와 같음
  printf("%p\n", *ppnData);
  printf("%p\n", ppnData[0]); // 위와 같음
  printf("%p\n", pnData);

}
/*
메모리의 자료구조는 스택(Stack)
자동 변수(예제)들은모두 스택 구조로 관리되는 메모리 영역에 존재
*/