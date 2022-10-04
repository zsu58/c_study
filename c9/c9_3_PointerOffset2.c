#include <stdio.h>

void main()
{
  char* pszData = "Test string!";
  printf("[%p] %c\n", pszData, *pszData);
  printf("[%p] %c\n", pszData + 1, *(pszData + 1) );
  printf("[%p] %c\n", pszData + 5, *(pszData + 5) );
  printf("[%p] %c\n", pszData + 11, *(pszData + 11) );
}

