#include <stdio.h>

void main()
{
  int nInput1 = 0, nInput2 = 0;
  printf("Input two numbers: "); 
  scanf("%d %d", &nInput1, &nInput2);

  if(memcmp(&nInput1, &nInput2, 4) == 0)
    puts("Same");
  else
    puts("Different");
}
