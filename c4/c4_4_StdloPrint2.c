#include <stdio.h>

void main()
{
  /* 
  pszData 변수는 자료형이 char인 변수의 주소를 저장하는 포인터 변수
  이 변수를 선언 후, Test string!이라는 문자열이 저장된 메모리의 시작 주소로 초기화
  */
  char *pszData = "Test string!"; 

  printf("%s\n", pszData); // pszData에 저장된 주소를 근거로 문자열 출력
  printf("%p\n", pszData); // pszData 변수에 저장된 주소를 주소 형식으로 출력
  /*
  &pszData는 pszData라는 이름의 변수의 주소
  따라서 pszData라는 이름의 변수의 (메모리) 주소가 출력
  */
  printf("%p\n", &pszData);
}
