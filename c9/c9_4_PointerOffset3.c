#include <stdio.h>

void main()
{
  char* pszData = "Test string!";
  printf("%d\n", sizeof(pszData)); // 32비트에서는 4, 64비트에서는 8
  printf("%d\n", sizeof(*pszData)); // 1 (char형 포인터를 간접 지정한 메모리)
  printf("%d\n", sizeof(pszData + 1)); // 32비트에서는 4, 64비트에서는 8
  printf("%d\n", sizeof(*pszData + 1)); // 4 (char형 포인터를 간접 지정한 메모리에 정수 1를 더해 integer로 승격됨)
  printf("%d\n", sizeof(*(pszData + 1))); // 1 (char형 포인터 변수에 대해 옵셋을 수행한 결과를 간접 지정한 메모리는 char형으로 해석)
}
