#include <stdio.h>

void main()
{
  char ch;
  printf("영어 소문자 입력: ");
  ch = getchar(); 
  printf("%c\n", ch - 32);
}
