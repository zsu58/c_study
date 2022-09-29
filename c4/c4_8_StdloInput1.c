#include <stdio.h>

void main()
{
  int nInput = 0; // 입력받는 정수를 저장하기 위해 int형 변수 선언 및 0으로 초기화
  printf("Input number: "); 

  scanf("%d", &nInput); // 입력받은 정수를 nInput이라는 이름의 메모리에 저장
  printf("%d\n", nInput); // nInput 변수에 저장된 값 출력
}

/*
int scanf( const char *format [,argument]... );
인자
format: 형식 문자열이 저장된 메모리의 주소
[, argument]: 형식 문자열에 대응하는 가변 인자
반환: 입력할 문자열의 개수를 반환
설명: 형식 문자열에 맞추어, 표준 입력 장치(stdin)로부터 정보를 읽어 들이는 함수, 가변 인자는 사용자가 입력한 값이 저장될 메모리의 주소
*/
