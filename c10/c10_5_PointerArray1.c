#include <stdio.h>

void main()
{
  char *apszData[] = {"String", "Data", "Test"};
  int i = 0;
  
  for(i = 0; i < 3; ++i)
    puts(apszData[i]);
}
