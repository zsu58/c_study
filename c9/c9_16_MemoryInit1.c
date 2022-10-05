#include <stdio.h>
#include <malloc.h>

void main()
{
  char *pszData = NULL;
  char szBuffer[32];
  int nData;

  pszData = (char*)malloc(sizeof(char) * 16);

  memset(pszData, 0, sizeof(char) * 16);
  memset(szBuffer, 'Z', sizeof(szBuffer));
  memset(&nData, 0xFF, sizeof(int));

  free(pszData);
}
/*
쓰레기 값 자체는 문제가 되지 않지만 그 값을 그대로 연산에 사용하면 큰 문제가 됨
따라서, malloc보다 calloc이 나음
그리고 이미 사용한 메모리 초기화 위해 memset() 사용

void *memset( void *dest, int c, size_t count );
인자
dest: 초기화할 대상 메모리의 주소
c: 초깃값, 이 값이 0이면 메모리를 0으로 초기화
count: 초기화하는 대상 메모리의 크기(바이트 단위)
반환: 대상 메모리의 주소
설명: 동적으로 할당받은 메모리에는 쓰레기 값이 있으므로 일반적으로 0으로 초기화하여 사용
*/