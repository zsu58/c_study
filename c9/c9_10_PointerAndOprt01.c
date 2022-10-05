#include <stdio.h>

void main()
{
  char *pszData = "Test string!";
  printf("%s\n", ++pszData); // pszData 포인터 변수를 1(offset)만큼 증가시킨 뒤, 계산된 주소부터 문자열 출력
  /*
  pszData 포인터 변수를 간접 지정한 메모리의 내용을 문자로 출력 후, 저장된 주소를 다시 1(offset)만큼 증가
  간접지정 연산을 하고 그 결과를 printf() 함수로 출력하는 일련의 과정이 끝난후에 증가 연산을 수행
  */
  printf("%c\n", *pszData++);
  printf("%c\n", *--pszData);
  /*
  괄호는 사실상 아무 의미가 없음(간접 지정 연산의 우선순위가 가장 높음)
  위눈 모두 연산의 대상이 주소, 여기서는 값
  */
  printf("%c\n", (*pszData) + 1); 
}
