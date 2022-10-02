#include <stdio.h>

void main()
{
  char ch; 
  int nInput1 = 0, nInput2 = 0;
  printf("영문 소문자 그리고 정수 2개를 빈칸을 구분자로 입력: ");
  scanf("%c %d %d", &ch, &nInput1, &nInput2);
  switch(ch){
    case 'a':
      printf("%d\n", nInput1 + nInput2);
      break;
    case 'b':
      printf("%d\n", nInput1 * nInput2);
      break;
    case 'c':
      printf("%d\n", nInput1 - nInput2);
      break;
    default:
      printf("알 수 없는 명령\n");
  }
}
