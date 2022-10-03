#include <stdio.h>

void main()
{
  int nData = 10, nNewData = 20;
  if (nNewData >= nData)
  {
    printf("%s\n", "nNewData >= nData");
  }

  // 실행하는 명령문이 하나면 굳이 새로 스코프를 만들 필요는 없음
  if (nNewData >= nData)
    printf("%s\n", "nNewData >= nData");
}
