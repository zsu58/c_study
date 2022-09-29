#include <stdio.h>

void main()
{
  char ch;
  /*
  getchar()을 통해 표준 입력 장치(stdin)인 키보드로부터 입력 받음. 
  이 때 한 행의 문자열을 입력받음(한 글자가 아니라) 
  이후 입력받은 문자열에서 첫 번째를 글자를 가져와 ch에 저장
  */
  ch = getchar(); 
  putchar(ch); // 표준 입력 장치의 파일 버퍼에서 한 글자를 가져와 출력
  ch = getchar(); // 표준 입력 장치의 파일 버퍼에서 한 글자를 가져와 ch 변수에 저장
  putchar(ch);
  ch = getchar();
  putchar(ch);
  printf("\n");
}

/*
int getchar(void);
반환: 표준 입력 장치(stdin)로부터 문자 한 글자를 읽어 와서 반환
설명: 만일 표준 입력 장치에서 버퍼 (메모리)가 비어 있다면 사용자로부터 입력을 받아 반환하고 그렇지 않으면 버퍼에서 가져와서 반 환

int putchar(int c);
반환: 표준 출력 장치(stdout)로 한 글자를 출력한다.
*/
