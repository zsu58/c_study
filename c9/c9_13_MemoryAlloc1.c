#include <stdio.h>
#include <malloc.h>

void main()
{
  char *pszData = NULL;
  int nInput = 0;

  printf("Input length: ");
  scanf("%d\n", &nInput);
  pszData = (char*)malloc(sizeof(char) * nInput); // 입력받은 수만큼의 메모리를 동적으로 할당받은 후 그 주소를 pszData 포인터 변수에 저장

  fflush(stdin); // 표준 입력 장치 파일의 입출력 정보를 초기화(문자열 입력 받을 시 문자열의 맨 나중에 개행 문자 (\n)가 추가되기 때문)
  gets(pszData); // 사용자로부터 입력받은 문자열을 pszData 포인터 변수에 저장된 주소의 메모리에 저장
  // fgets(pszData, nInput, stdin);
  puts(pszData); 

  free(pszData); // 동적으로 할당받은 메모리를 해제
}
/*
void *malloc(size_t size);
인자
size: 할당받을 메모리의 크기(바이트 단위)
반환: 힙 영역에 할당된 메모리 중 첫 번째 메모리의 주소, 오류가 발생하면 NULL을 반환
설명: 할당받은 메모리는 반드시 free() 함수를 이용하여 반환해야 하며, 메모리를 초기화하려면 memset() 함수를 이용, 기본적으로는 쓰레기 값이 들어 있음

void free( void *memblock );
인자
memblock: 반환할 메모리의 주소
반환: 없음
설명: 동적으로 할당받은 메모리를 운영체제에게 반환
*/
