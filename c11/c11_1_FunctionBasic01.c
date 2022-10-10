#include <stdio.h>

int TestFunc(int nData)
{
  if(nData > 10)
  {
    puts("OK");
    return 1;
  }
  puts("return");
  return 0;
}

void main()
{
  TestFunc(5);
  TestFunc(15);  
}
