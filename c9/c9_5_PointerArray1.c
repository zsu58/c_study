#include <stdio.h>

void main()
{
  char szName[16] = {0}; // szName이라는 배열 선언 후 0으로 초기화
  char *pszName = szName; // char형 포인터 변수 pszName을 선언하고 동시에 szName이라는 주소(배열)로 초기화

  sprintf(pszName, "%s", "홍길동"); // pszName 포인터 변수에 저장된 주소로 문자열을 출력(저장)
  puts(szName);
}
/*
배열은 동일한 자료형의 메모리를 일정 개수만큼 모아서 하나로 묶은 형태
묶음 전체를 대표하는 이름을 배열의 이름이라하는데(e.g. szName) 그 실체는 주소 상수이며, 그 묶음중에서 첫 번째 요소의 주소
*/
