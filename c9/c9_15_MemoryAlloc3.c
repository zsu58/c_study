#include <stdio.h>
#include <malloc.h>

void main()
{
  char *pszBuffer = NULL;
  char *pszNewBuffer = NULL;

  pszBuffer = (char*)malloc(12);
  sprintf(pszBuffer, "%s", "TestString");
  size_t ch_size = malloc_usable_size(pszBuffer)/sizeof(char);
  printf(
      "[%p] %ld %s\n",
      // pszBuffer, _msize(pszBuffer), pszBuffer // _msize는 windows compiler
      pszBuffer, ch_size, pszBuffer // 할당 받은 크기는 실제 요청 값과 차이날 수 있음
  );

  /*
  기존에 할당받은 메모리를 확장하야 다시 받은 후 새로운 포인터 변수에 주소 저장
  기존의 주소와 달라진다면, 메모리 확장에 실패(NULL 반환)했기 때문에 다른 주소에 메모리를 새로 확보하고서 그 주소를 반환한 것을 알 수 있음
  */
  pszNewBuffer = (char*)realloc(pszBuffer, 32); 

  if(pszNewBuffer == NULL) // 메모리 다시 할당받는데 실패
    free(pszBuffer); // realloc()은 메모리 확장에 실패하면 기존의 메모리 해제

  sprintf(pszNewBuffer, "%s", "TestStringData");
  size_t ch_size2 = malloc_usable_size(pszNewBuffer)/sizeof(char);
  printf(
      "[%p] %ld %s\n",
      // pszNewBuffer, _msize(pszNewBuffer), pszNewBuffer
      pszNewBuffer, ch_size2, pszNewBuffer         
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
