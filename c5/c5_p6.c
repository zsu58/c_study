#include <stdio.h>

void main()
{
  int nInput = 0, t = 0, m = 0, s = 0;
  printf("Input seconds: "); 
  scanf("%d", &nInput);
  
  t = nInput / 3600;
  m = (nInput - (3600 * t)) / 60;
  // 위와 같음
  // m = (nInput % 3600) / 60;
  s = nInput - (3600 * t) - (60 * m);
  // 위와 같음  
  // s = nInput % 60;

  printf("%d초는 %02d시간 %02d분 %d초 입니다\n", nInput, t, m, s);
}

