#include <stdio.h>

void main()
{
  int nInput1 = 0, nInput2 = 0, nInput3 = 0;
  printf("Input three numbers: "); 
  scanf("%d %d %d", &nInput1, &nInput2, &nInput3);

  int maxInput = (nInput1 > nInput2 && nInput1 > nInput3) ? nInput1 : (nInput2 > nInput3) ? nInput2 : nInput3;
  printf("%d\n", maxInput);
}
