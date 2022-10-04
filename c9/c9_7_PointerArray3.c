#include <stdio.h>

void main()
{
  char *pszData = "Test string!";
  printf("%c\n", *(pszData + 0));
  // 위와 같음
  printf("%c\n", pszData[0]);
  
  printf("%c\n", *(pszData + 3));
  // 위와 같음
  printf("%c\n", pszData[3]);
}
/*
주소[인덱스] = *(주소 + 인덱스)
*/
