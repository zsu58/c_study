#include <stdio.h>

void main()
{
  int nData1 = 1234, nData2 = -4567;
  
  printf("%d\n", nData1);
  printf("%+d, %+d\n", nData1, nData2); // 기호 붙여서 출력
  
  printf("%07d\n", nData1); // 전체 자리수 7 & 오른쪽 정렬, 왼쪽 빈칸은 0
  printf("%7d\n", nData1);  // 전체 자리수 7 & 오른쪽 정렬
  printf("%-7d\n", nData1); // 전체 자리수 7 & 왼쪽 정렬
}
