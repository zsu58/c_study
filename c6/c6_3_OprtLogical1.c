#include <stdio.h>

void main()
{
  /*
  연산의 우선순위가 낮은 편
  경우에 따라 연산을 수행하지 않을 때도 있음
  C 언어에서 0이 아닌 모든 수는 참(음수도 참)
  */
  int nData = 10, nNewData = 20;
  int x = 0, y = 0;
  printf("%d\n", nData && nNewData);
  printf("%d\n", nData && x);
  printf("%d\n", nData || x);
  printf("%d\n", x || y);
  printf("%d\n", x && y);
}

