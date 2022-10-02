#include <stdio.h>

void main()
{
  int nData = 10, nNewData = 20;
  int x = 0, y = 0;
  printf("%d\n", !nData && nNewData); //  왼쪽 항의 연산 결과가 거짓으로 판명되었으므로 오른 쪽 항은 더 이상 연산하지 않음
  printf("%d\n", !(nData && x));
  printf("%d\n", !nData || x);
  printf("%d\n", x || !y);
  printf("%d\n", !(x && !y));
}
