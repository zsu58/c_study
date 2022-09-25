#include <stdio.h>

void main()
{
  float flData = -123.45f;
  double dblData = 123.45;

  // sizeof(): 저장에 필요한 메모리의 크기를 바이트 단위로 제공
  printf("%ld\n", sizeof(123.45f)); // sizeof(flData)
  printf("%ld\n", sizeof(123.45)); // sizeof(dblData)

  // warning: too many arguments for format [-Wformat-extra-args] 오류 해결: https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=alsdomm&logNo=221434173436
}
