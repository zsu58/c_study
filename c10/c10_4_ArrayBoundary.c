#include <stdio.h>

void main()
{
  int nData = 10;
  char szName[12] = {0};

  // 이름으로 "Hong gildong"을 입력
  gets(szName);
  printf("%s, %d\n", szName, nData);
}
