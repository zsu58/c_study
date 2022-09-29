#include <stdio.h>

void main()
{
  char szBuffer[128] = {0};
  printf("Input String: ");

  scanf("%s", szBuffer);
  puts(szBuffer);
}

/*
scanf는 ' '전까지를 받음 즉, 
이것은테스트문자열입니다: 모두 출력
이것은 테스트 문자열입니다: '이것은'만 출력
문자열 입력받을 시 gets(), gets_s() 사용
*/