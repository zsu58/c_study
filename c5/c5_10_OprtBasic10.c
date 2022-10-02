#include <stdio.h>

void main()
{
  int nData = -123;
  printf("%X\n", nData);
  printf("%X\n", nData >> 3); // 음수인 경우 패딩이 1로 채워짐(부호 유지 위해)
}
