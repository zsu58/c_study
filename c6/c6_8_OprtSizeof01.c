#include <stdio.h>
#include <string.h>

void main()
{
  char szName[16] = {"Choi"};
  int nData = 10;

  /*
  sizeof 연산자는 피연산자인 자료형이나 상수, 식별자에 대하여 메모리의 크기를 계산해 바이트 단위로 알려줌
  */
  printf("%d\n", sizeof(short));
  printf("%d\n", sizeof( (short)100));

  printf("%d\n", sizeof 100); // sizeof 연산자의 피연산자를 꼭 괄호로 묶을 필요는 없음, 단, 피연산자가 자료형일 경우에는 예외
  printf("%d\n", sizeof(nData)); // sizeof 연산자의 피연산자가 변수인 경우, 값은 전혀 상관이 없고 변수의 자료형이 무엇인지 확 인하여 메모리의 크기를 계산
  printf("%d\n", sizeof(int));

  printf("%d\n", sizeof (100.0));
  printf("%d\n", sizeof (100.0f));
  printf("%d\n", sizeof(10.0 / 10));
  printf("%d\n", sizeof(10 / 10));

  printf("%d\n", sizeof(char*)); // char형은 메모리 크기가 1바이트 자료형이지만, char*형은 주소를 담아야 하기 때문에 32비트 응용 프로그램이면 메모리 크기가 4바이트, 64비트 응용 프로그램이면 8바이트
  printf("%d\n", sizeof(szName));
}

