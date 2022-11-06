#include <stdio.h>

void main()
{
  int nData = 10;

  void *pszData = "Test string!";
  void *pfnName = main;
  void *pData = &nData;

  // 아래 코드는 컴파일 오류, 왜냐하면 자료형이 정해져 있지 않아 offset 계산을 못함
  // printf("%c", *(pszData + 1));

  printf("%s\n", ((char*)pszData + 1)); // char*로 형변환하면 가능
  printf("%c\n", *((char*)pszData + 1)); // char*로 형변환하면 가능
}
/*
void형은 메모리를 해석하는 방법을 구체적으로 결정하지 않은 자료형, 따라서 void*형은 자료형에 상관없이 주소를 저장할 수 있음
그러나 void*형은 자료형에 상관없이 주소를 저장할 수 있기에 옵셋을 수행할 수 없음

함수, 배열의 이름은 모두 주소, 따라서 각 식별자의 자료형에 적합한 포인터 변수를 선 언하여 주소를 저장할 수 있음
그러나 식별자의 자료형에 상관없이 주소를 저장할 변수가 필요하다면 void형이 가장 적절
*/
