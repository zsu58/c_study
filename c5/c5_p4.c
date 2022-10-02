#include <stdio.h>

void main()
{
  int nInput1 = 0;
  printf("Input: "); 
  scanf("%d", &nInput1);
  printf("%X\n", nInput1 & 0xFFFFFFF7);
  // printf("%X\n", nInput1 & ~0x00000008);
}
