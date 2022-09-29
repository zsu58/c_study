#include <stdio.h>
#include <inttypes.h>

void main()
{
  int64_t nData = 0xFFFFFFFF;
  
  printf("%ld\n", nData); // 부호 있는 32비트 10진수 정수형
  printf("%lu\n", nData); // 부호 없는 32비트 10진수 정수형
  printf("%" PRId64 "\n", nData + 10); // 64비트 정수형
  }
