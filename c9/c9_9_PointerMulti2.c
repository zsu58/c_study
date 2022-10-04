#include <stdio.h>

void main()
{
  char *apszList[3] = {"Test", "String", "Data"}; // 요소가 char*형이고 개수가 3인 배열을 선언하고 초기화
  char **ppszList = apszList; // char형 이중 포인터 변수 선언 및 초기화
  
  char szBuffer[32] = {"TestString"}; // 요소가 char형이고 개수가 32인 배열 선언 및 초기화
  char *pszBuffer = szBuffer; // char형 단일 포인터 변수 선언 및 초기화

  printf("%c\n", **apszList);
  printf("%c\n", *apszList[1]);
  printf("%c\n", *pszBuffer);

  printf("%s\n", apszList[0]);
  printf("%s\n", *(ppszList + 1));
}
/*
p..309
*/
