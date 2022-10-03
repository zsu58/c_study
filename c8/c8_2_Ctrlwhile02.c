#include <stdio.h>

void main()
{
  /*
  do
  {
    명령문;
  }
  while (조건식);
  조건식의 결과와 상관없이 우선 명령문을 실행
  그런 다음 조건식을 실행하여 결과가 참이면 명령문을 반복하여 실행
  */
  int nInput = 0;
  printf("Input: ");
  scanf("%d", &nInput);
  
  do
  {
    printf("%dth printf()\n", nInput);
    nInput--;
  } while (nInput > 0); // do-while에서는 while 뒤에 ;를 붙임
}
