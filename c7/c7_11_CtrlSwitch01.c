#include <stdio.h>

void main()
{
  /*
  switch 식을 작성할 때는 연산 결과가 반드시 정수 계열의 자료형(int/ char/ short)
  */
  int nInput = 0;
  char chCredit = 'X';
  printf("Input: ");
  scanf("%d", &nInput);

  switch(nInput / 10){
    case 10:
    case 9:
      chCredit = 'A'; // 10이거나 9인 경우
      break;
      case 8:
        chCredit = 'B';
        break;
      case 7:
        chCredit = 'C';
        break;
      case 6:
        chCredit = 'D';
        break;
      default:
        chCredit = 'F';
  }
  printf("Credit : %c\n", chCredit);
}
