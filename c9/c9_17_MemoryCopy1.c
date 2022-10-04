#include <stdio.h>
 #include <string.h>

void main()
{
  char *pszData = "TEST STRING!";
  char szBuffer[16] = {0};

  memcpy(szBuffer, pszData, 4);
  puts(szBuffer);
  memcpy(szBuffer, pszData, 6);
  puts(szBuffer);
  memcpy(szBuffer, pszData, 12);
  puts(szBuffer);
}
/*
void *memcpy(void *dest, const void *src, size_t count);
인자
dest: 대상 메모리의 주소
src: 복사할 원본 데이터가 저장된 메모리의 주소
count: 복사할 메모리(바이트 단위)이다.
반환: 대상 메모리의 주소
설명: 특정 주소로 시작하는 일정 크기의 메모리에 저장된 값을 대상 메모리에 그대로 복사
*/
