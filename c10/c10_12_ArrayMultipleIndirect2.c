#include <stdio.h>

void main()
{
  char aszName[2][16] = {"Gil-dong", "Ho-sung"};
  char (*pszName)[16] = aszName; //  2차원 배열에 대하여 포인터를 선언하는 형식

  printf("%c, %c\n", aszName[1][3], pszName[1][3]);
  printf("%p, %p\n", aszName, aszName + 1);
  printf("%p\n", *(aszName + 1) + 4);
  printf("%c\n", *(*(aszName + 1) + 4));
}
