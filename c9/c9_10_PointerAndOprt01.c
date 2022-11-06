#include <stdio.h>

void main()
{
  char *pszData = "Test string!";
  printf("%s\n", ++pszData); // pszData 포인터 변수를 1(offset)만큼 증가시킨 뒤, 계산된 주소부터 문자열 출력
  /*
  pszData 포인터 변수를 간접 지정한 메모리의 내용을 문자로 출력 후, 저장된 주소를 다시 1(offset)만큼 증가
  pszData 포인터 변수에 저장된 주소를 1만큼 감소(offset)시킨 후, 그 주소를 간접 지정한 메모리의 내용을 출력
  */
  printf("%c\n", *pszData++);
  printf("%c\n", *--pszData);
  /*
  괄호는 사실상 아무 의미가 없음(간접 지정 연산의 우선순위가 가장 높음)
  위의 경우 모두 연산의 대상이 주소인 반면 여기서는 값
  */
  printf("%c\n", (*pszData) + 1); 
}
