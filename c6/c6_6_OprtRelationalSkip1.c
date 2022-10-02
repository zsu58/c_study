#include <stdio.h>

void main()
{
  /*
  ||: 앞의 연산이 참(1)이면 뒤에 연산 안함
  &&: 앞의 연산이 거짓(0)이면 뒤에 연산 안함
  */
  int k, x = -1, y = -1, z = 1;
  k = ++x || ++y && ++z;
  printf("%d %d %d %d\n", k, x, y, z);

  x = -1, y = -1, z = 1;
  k = x++ || ++y && ++z; // x=-1은 참으로 판단되어 나머지 논리식을 수행하지 않음
  printf("%d %d %d %d\n", k, x, y, z);
}
