#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  for (i = 0; i < argc; ++i)
    puts(argv[i]);

  return 0;
}
/*
argc는 1이며 
argv 배열의 첫 번째 요소에 저장된 주소가 가리키는 메모리에는 예제 소스를 빌드하여 생성된 실행 파일의 경로를 나타내는 문자열이 저장되어 있음

./a.out a b 이런식으로 문자열을 추가로 줄 수 있음
*/