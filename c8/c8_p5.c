#include <stdio.h>
#include <string.h>
#define SIZE 100

void main()
{
  char ch;
  int nCount = 0;
  do 
  {
    ch = getchar();
    if (ch == 't')
      nCount++;
  } 
  while (ch != '/');

  printf("Number of t: %d\n", nCount);
}

// 한번만 입력
// void main()
// {
//   int nCount = 0;
//   char chArr[SIZE];
//   printf("Input: ");
//   gets(chArr);

//   for(int i = 0; i < strlen(chArr); i++)
//   {
//     if (chArr[i] == 't')
//       nCount++;
//     else if (chArr[i] == '/')
//       break;
//   }
//   printf("Number of t: %d\n", nCount);
// }
