#include <stdio.h>

void main()
{
  int nInput = 0;
  printf("Input: ");
  scanf("%d", &nInput);
  if (nInput >= 10) {
    puts("10 이상");
  }
  else {
    puts("10 미만");
  }
}
