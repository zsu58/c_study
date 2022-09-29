#include <stdio.h>

void main()
{
  float fData = 123.456f;
  
  printf("%f\n", fData);
  printf("%.1f\n", fData);
  printf("%.2f\n", fData);
  printf("%.3f\n", fData);

  printf("%e\n", fData); // 지수 형식으로 출력
  printf("%g\n", fData); // %f와 %e 중 짧은 쪽으로 출력
  }
