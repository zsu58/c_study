#include <stdio.h>

void main()
{
  int i = 0;
  // 초기 명령문(e.g. i = 0)은 처음 한 번만 실행되고 이후로는 다시 실행되지 않음
  for(i = 0; i < 5; ++i)
  {
    printf("%dth\n", i);
  }
}
