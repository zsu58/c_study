#include <stdio.h>

void main()
{
  char aszData[3][16] = {
      "Test string",
      "Sample data",
      "Array of array"
  };

  printf("%c\n", aszData[1][3]);
  printf("%c\n", *(*(aszData + 1) + 3)); // 위와 같음

  printf("%p\n", aszData[0]); // 2차원 배열의 이름에 대해 1회 배열 연산을 수행한 결과는 주소, 그 주소에 저장된 문자열 출력
  printf("%p\n", aszData + 1); // 위와 같음, 단 옵셋 값이 0이 아니라 1(연산 결과는 주소)
  printf("%p\n", *(aszData + 2)); // 위와 같음, 단 옵셋 값이 1이 아니라 2(연산 결과는 주소)

  printf("%p\n", *aszData + 1); // 간접 지정 연산의 결과가 주소이며, 이 주소는 char*의 주소. 따라서 + 1 옵셋으로 증가하는 주소의 크기는 sizeof(char) * 1
  printf("%p\n", *(aszData + 1) + 1); // aszData + 1 옵셋에서 1의 의미는 sizeof(char) * 16 * 1이다. 그리고 그 결과는 주소이다. 여기 에 다시 1을 더했는데 여기서는 sizeof(char) * 1을 의미
}
