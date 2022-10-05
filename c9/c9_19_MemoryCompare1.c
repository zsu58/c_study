#include <stdio.h>
 #include <string.h>

void main()
{
  char *pszData = "1234";
  char szBuffer[16] = {0};
  printf("Input password: ");

  gets(szBuffer);
  if(memcmp(pszData, szBuffer, 4) == 0)
    puts("Success");
  else
    puts("Failure");
}
/*
int memcmp( const void *buf1, const void *buf2, size_t count );
인자
buf1: 비교하는 원본 메모리의 주소
buf1: 비교하는 원본 메모리의 주소
count: 비교할 메모리의 크기(바이트 단위)
반환: memcmp() 함수는 내부적으로 첫 번째 인자로 전달받은 주소의 메모리에 저장된 값에서 두 번째 인자로 전달받은 주소에 저장된 메모리의 값을 빼서 두 값이 같은지 비교
따라서 연산 결과가 0이 면 두 값은 같은 것이 됨, 그러나 0보다 크면 buf1이 buf2보다 크고, 0보다 작으면 buf2가 더 큰 경우이며 두 메모리가 같지 않다는 의미가 됨.
단, 빼기 연산을 수행할 때 자료형은 unsigned char형 으로 처리되어 -1(0xFF)은 1(0x01)보다 큰 값으로 처리
설명: 주어진 크기만큼 두 메모리를 비교하는 함수
*/