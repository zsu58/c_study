#include <stdio.h>

void main()
{
  // goto는 추천하지 않음
  int nInput = 0;
  printf("Input: ");
  scanf("%d", &nInput);

  if(nInput > 10)
    goto END;

  printf("Number: %d\n", nInput);

  END:
    puts("End");
}
