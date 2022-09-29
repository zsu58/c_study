#include <stdio.h>

void main()
{
  int nData = 0x41;

  printf("%d\n", nData);
  printf("%X\n", nData);

  printf("%c\n", nData);
  printf("%c\n", nData + 1);
  printf("%c\n", 'A' + 2);
  printf("%c\n", 'A' + 3);

  printf("%s, %d\n", "Hello", 10);
}

/*
int printf(const char *format [,argument]... );
인자
format: 형식 문자열이 저장된 메모리의 주소
[, argument] : 형식 문자열에 대응하는 가변 인자
반환: 입력 문자 하나를 반환
설명: 형식 문자열에 맞추어 표준 출력 장치(stdout)에 문자열을 출력
cf. %[flags][width][.precision][{h|l|I64|L}]type
* flags: 부호나 빈칸 등의 형식을 지정하는 형식
* width: 출력할 값의 길이를 지정
* precision: 출력할 소수점 이하의 값을 지정
* h|l|I64|L: type 항목에 대한 옵션으로 가변 인자에 대한 메모리의 크기를 지정
* type: 가변 인자를 어떤 형식으로 해석해야 할지 결정하는 요소
*/