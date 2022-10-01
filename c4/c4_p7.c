#include <stdio.h>

void main()
{
  double dInput1 = 0, dInput2 = 0;
  printf("두 실수 입력: ");
  scanf("%lf %lf", &dInput1, &dInput2); 
  printf("%.2lf\n", (dInput1 + dInput2) / 2);
}
