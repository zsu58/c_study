#include <stdio.h>

void main()
{
  char *apszList[3] = {"Test", "String", "Data"}; // 요소가 char*형이고 개수가 3인 배열을 선언하고 초기화
  char **ppszList = apszList; // char형 이중 포인터 변수 선언 및 초기화
  
  char szBuffer[32] = {"TestString"}; // 요소가 char형이고 개수가 32인 배열 선언 및 초기화
  char *pszBuffer = szBuffer; // char형 단일 포인터 변수 선언 및 초기화

  printf("%c\n", **apszList); // apszList는 배열의 이름으로 주소, 이 주소를 한번 간접 지정하면 char*, 두 번 간접 지정하면 char형
  printf("%c\n", *apszList[1]); // apszList에 대해 배열 연산 수행 후(결과 char*형) 그 결과에 대해서 간접 지정 연산 수행
  printf("%c\n", *pszBuffer);

  printf("%s\n", apszList[0]); // apszList는 요소가 char*형인 배열의 이름이기에 배열 연산의 결과는 char*형
  printf("%s\n", *(ppszList + 1)); // ppszList + 1 연산의 결과는 주소이며, 해당 주소를 간접 지정한 연산 결과는 char*형
}
/*
p..309
*/
