#include <stdio.h>

void main()
{
  /*
  [간접 지정 연산자]
  *A: A에 저장된 주소에 해당하는 메모리에 접근
  이 경우 포인터 변수라고 하며, 포인터 변수에는 메모리가 저장됨
  */
  int nData = 10;
  int *pnData = &nData;

  printf("%d, %d\n", nData, *pnData); // nData 변수의 값을 10진수로 출력, pnData라는 이름의 메모리에 저장된 주소를 읽어온 후 해당 주소의 메모리를 int형으로 지정하여 저장된 값을 10진수로 출력
  printf("%p, %p\n", &nData, pnData); // 이름이 nData인 메모리의 주소와 pnData인 메모리에 지정된 값을 읽어 와 모두 주소 형식으로 출력

  /*
  포인터 변수 pnData에 들어있는 주소의 메모리를 int형으로 지정한 후, 20을 단순 대입
  즉, *pnData = 20;은 nData = 20;과 동일
  */
  *pnData = 20;
  printf("%d\n", nData);
}
