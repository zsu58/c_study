#include <stdio.h>
#include <malloc.h>

void main()
{
  char *pszBuffer = NULL;
  char *pszNewBuffer = NULL;

  pszBuffer = (char*)malloc(12);
  sprintf(pszBuffer, "%s", "TestString");
  printf(
      "[%p] %d %s\n",
      pszBuffer, _msize(pszBuffer), pszBuffer
  );

  pszNewBuffer = (char*)realloc(pszBuffer, 32);

  if(pszNewBuffer == NULL)
    free(pszBuffer);

  sprintf(pszNewBuffer, "%s", "TestStringData");
  printf(
      "[%p] %d %s\n",
      pszNewBuffer, _msize(pszNewBuffer), pszNewBuffer
  );

  free(pszNewBuffer);
}
/*
void *realloc(void *memblock, size_t size);
인자
memblock: 기존에 동적으로 할당받았던 메모리의 주소, 만일 이 주소가 NULL이면 이 함수는 malloc() 함수와 동일하게 동작
size: 다시 할당받을 메모리의 크기(바이트 단위)
반환: 다시 할당받은 메모리 중 첫 번째 메모리의 주소, 만일 다시 할당받는 데 실패하면 NULL을 반환(이 경우에는 첫 번째 인자로 전달받은 메모리를 수동으로 해제해야 함)
설명: 만일 이미 할당받은 메모리에서 크기를 조정할 수 있다면, 반환된 주소는 첫 번째 인자로 전달받 은 주소와 같음, 그러나 . 그러나 불가능하다면 기존의 메모리를 해제하고 새로운 영역에 다시 할당받은 후, 새로 할당받은 메모리의 주소를 반환
*/
