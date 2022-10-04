#include <stdio.h>
#include <malloc.h>
#include <string.h>

void main()
{
  int *pnData = NULL;
  pnData = (int*) malloc(sizeof(int) * 4); // malloc을 통해 동적으로 할당받은 메모리의 주소를 pnData 변수에 저장
  memset(pnData, 0, sizeof(int) * 4); // pnData에 저장된 주소로 시작해 세 번째 인자에 의해 전달받은 크기만큼의 메모리를 0으로 초기화
  printf("%p\n", pnData); // pnData 변수에 저장된 주소를 주소 형식으로 출력
  /*
  pnData라는 이름을 가진 메모리에 저장된 주소를 읽어 와 옵셋을 수행한 결과를 주소 형식으로 출력
  pnData가 정수형(integer)이기 때문에 더해지는 옵셋 값은(sizeof(int)*)임
  */
  printf("%p\n", pnData + 1); 
  printf("%p\n", pnData + 2);
  printf("%p\n", pnData + 3);
  free(pnData); // 동적으로 할당받은 메모리를 해제, 운영체제에 반환
}

