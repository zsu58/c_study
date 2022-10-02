#include <stdio.h>

void main()
{
  char ch = 'A';
  printf("%d\n", ch * 2); // 130(int형), char: 1 byte/ int: 4 byte

  printf("%d\n", 1 / 2); // 정수형 값과 정수형 값을 연산하면 결과는 정수형 값
  printf("%f\n", 1 / 2); // 정수형 값과 정수형 값을 연산하면 결과는 정수형 값

  printf("%f\n", 1.0f / 2); // 실수형 값과 정수형 값을 연산하면 결과는 실수형 값
  printf("%f\n", 1 / 2.0f); // 실수형 값과 정수형 값을 연산하면 결과는 실수형 값
}
