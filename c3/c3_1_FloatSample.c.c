#include <stdio.h>

// 부동 소수점 오차 문제
void main()
{
  float fResult = 0.0f;
  int i = 0;

  // fResult(실수형 변수)에 0.1을 계속 누적하여 20번 더하기
  for(i=0; i < 20; ++i)
    fResult += 0.1f;
  printf("%.10f\n", fResult); 
  // 2.0000002384
  // float의 유효 자릿수는 6, 이 결과는 문제 없음

  // fResult(실수형 변수)에 0.1을 계속 누적하여 30번 더하기
  for(i=0; i < 30; ++i)
    fResult += 0.1f;
  printf("%.10f\n", fResult); 
  // 4.9999976158
  // 이 결과는 유효자릿수까지 영향을 미침
}
