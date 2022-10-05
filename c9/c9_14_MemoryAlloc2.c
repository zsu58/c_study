#include <stdio.h>
#include <malloc.h>
#include <string.h>

void main()
{
  char *pszData = NULL;
  int nInput = 0;

  printf("Input length: ");
  scanf("%d\n", &nInput);
  pszData = (char*)calloc(nInput, sizeof(char));

  fflush(stdin);
  gets(pszData);
  puts(pszData); 

  free(pszData);
}
/*
void *calloc(size_t num, size_t size);
인자
num: 요소의 개수
size: 각 요소의 크기(바이트 단위)
반환: 힙 영역에 할당된 메모리 중 첫 번째 메모리의 주소, 할당된 메모리의 크기는 num인자 * size인자
설명: 할당받은 메모리를 0으로 초기화, 할당받은 메모리는 반드시 반환해야 함
*/
