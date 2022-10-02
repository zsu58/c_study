#include <stdio.h>

void main()
{
  int nInput1 = 0, nInput2 = 0, nInput3 = 0, nInput4 = 0, nInput5 = 0;
  printf("Input1: ");
  scanf("%d", &nInput1);
  printf("Input2: ");
  scanf("%d", &nInput2);
  printf("Input3: ");
  scanf("%d", &nInput3);
  printf("Input4: ");
  scanf("%d", &nInput4);
  printf("Input5: ");
  scanf("%d", &nInput5);

  if ((nInput1 > nInput2) && (nInput1 > nInput3) && (nInput1 > nInput4) && (nInput1 > nInput5))
    printf("%d\n", nInput1);
  else if ((nInput2 > nInput3) && (nInput2 > nInput4) & (nInput2 > nInput5))
    printf("%d\n", nInput2);
  else if ((nInput3 > nInput4) && (nInput3 > nInput5))
    printf("%d\n", nInput3);
  else if ((nInput4 > nInput5))
    printf("%d\n", nInput4);
  else
    printf("%d\n", nInput5);
}
