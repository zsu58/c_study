#include <stdio.h>

int TestFunc(int); // 함수의 정의, 매개 변수의 이름은 생략할 수 있음

void main()
{
  TestFunc(5);
  TestFunc(15);  
}

int TestFunc(int nData) // 함수의 선언
{
  if(nData > 10)
  {
    puts("OK");
    return 1;
  }
  puts("return");
  return 0;
}