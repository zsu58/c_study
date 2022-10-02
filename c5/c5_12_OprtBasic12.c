#include <stdio.h>

void main()
{
  int nResult = 0x11223344;

  nResult &= 0xFFFF0000;
  printf("%X\n", nResult);
  nResult >>= 16;
  printf("%X\n", nResult);
  nResult |= 0x33440000;
  printf("%X\n", nResult);
}
