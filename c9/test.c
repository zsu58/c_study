#include <stdio.h>

void main()
{
  char* pszData = "Test string!";
  char *pszData2 = "Test string!";

  printf("%ld\n", sizeof(pszData));
  printf("%s\n", pszData);
  printf("%ld\n", sizeof(pszData2));
  printf("%s\n", pszData2);
  printf("%ld\n", sizeof(*pszData));
  printf("%c\n", *pszData);
  printf("%ld\n", sizeof(*pszData2));
  printf("%c\n", *(pszData2+2));
}

// apszlist(0xd) = [0xa, 0xb, 0xc]
// ppszlist = oxd

// szBuffer(0xe) = 0xf

// Test
// Test
// Teststring
// 0xa
// 0xb

