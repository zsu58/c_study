#include <stdio.h>

void main()
{
  int nInput1 = 0, nInput2 = 0;
  printf("Input two numbers: "); 
  scanf("%d %d", &nInput1, &nInput2);

  printf("%d\n", nInput1 > 10 && nInput2 > 10 ? 1 : 0);
}
