#include <stdio.h>

void main()
{
  // c99 이전 버전에서는 오류
  int nData = 0;
  nData = 1 + 1;
  char ch = 'A';

  // c99 이전 버전에서는 다음과 같이 작성해야함
  int nData = 0;
  char ch = 'A';
  nData = 1 + 1;
}

/*
cf.
변수: '메모리에 붙여진 이름' 혹은 '메모리에 이름을 붙인 것
모든 메모리가 한 직선 형태로 선형 형태
자료형은 일정 크기의 메모리를 해석하는 방법(즉, 그 주소 중에서 특정한 주소를 시작으로 몇 바이트만큼을 읽어서 어떤 방법으로 해석하겠다는 것)
변수는 해석할 대상 메모리에 붙인 이름

변수(Variable)를 사용하기 위해서는 반드시 선언
C 언어의 코드에서 변수 가 선언되면 운영체제는 해당 문법에 대응하는 메모리를 확보한 후 접근을 허용

c99 이전에는 스코프({}) 직후해야 했지만, 이후 버전에서는 바뀜
*/
